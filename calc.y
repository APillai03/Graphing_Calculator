%{
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<alloca.h>
#include<stddef.h>
#include<string.h>
#include<ctype.h>
#include<unistd.h>



extern char* yytext;
extern int yylineno;
extern int yyleng;


typedef struct yy_buffer_state *YY_BUFFER_STATE;

extern YY_BUFFER_STATE yy_scan_string(const char *str);
extern void yy_switch_to_buffer(YY_BUFFER_STATE buffer);
extern void yy_delete_buffer(YY_BUFFER_STATE buffer);


int yylex(void);
int m=1;
int plot=0;
int count;
int flag=0;
int qtr=-1;
double arr[1000];
double x1[721];

double sym[52];         //a-z and A-Z

void yyerror(char* s)       //ERROR PRINTING
{
    printf("%s\n", s);
    flag=1;
}

void set_input(const char *input) {
    yytext = strdup(input);  // Set yytext to the new input string
    yyleng = strlen(yytext);  // Set the length of the input string
    yylineno = 1;             // Reset the line number for fresh parsing
}


%}

%union  {
    double val;
    char var;
    char* str;
}


%token PLOT OPEN_BRACKET CLOSE_BRACKET ASSIGN PRINT COMMA
%token <val> num
%token <var> VARIABLE
%token ADD SUB MUL DIV POW EXP SQRT MOD PI E
%token COS SIN TAN ASIN ACOS ATAN COT SEC COSEC LOG LN


%left SUB ADD                      
%left MUL DIV MOD                  
%left POW SQRT                     
%left OPEN_BRACKET CLOSE_BRACKET   

%type <val> exp
%type <val> constant
%type <str> expr
%type <val> new

%%
ss: VARIABLE ASSIGN exp {
    if(islower($1))
    {
        sym[$1 - 97] = $3;
    }
    else
    {
        sym[$1 - 39] = $3;
    }
    
}
| PRINT OPEN_BRACKET VARIABLE CLOSE_BRACKET {
    if(flag==0)
    {
        if(islower($3))
        {
            printf("Result: %.10f\n",sym[$3-97]);
        }
        else
        {
            printf("Result: %.10f\n",sym[$3-39]);
        }
        
    }
}
| exp {
    if(flag==0 && plot==0)
    {
        printf("Result: %.10f\n", $1);
    }
    if(plot==1)
    {
        arr[++qtr] = $1;
    }

}
| VARIABLE {
    if(flag==0)
    {
        printf("Result: %.10f\n", sym[$1-97]);
    }
}
| new {
    if(flag==0)
    {
        printf("Result: %.10f\n", $1);
    }
}

new: PLOT OPEN_BRACKET expr CLOSE_BRACKET {

    if(flag == 0) {
        qtr = -1;
        printf("PLOTTING y=%s\n", $3);
        plot = 1;
        // Define the range for 'x'
        int start_value = -360;  
        int end_value = 360;   
        int step = 1;  
        
        
        for (int current_value = start_value; current_value <= end_value; current_value += step) 
        {
            
            
            char input_with_x[1024];
            snprintf(input_with_x, sizeof(input_with_x), "%s", $3); 
            
            char *modified_expr = malloc(strlen(input_with_x) + 20);
            
            char *ptr = modified_expr;
            for (int i = 0; input_with_x[i] != '\0'; i++) 
            {
                if (input_with_x[i] == 'x') 
                {
                    
                    ptr += sprintf(ptr, "%d", current_value);
                } 
                else 
                {
                    *ptr++ = input_with_x[i];  
                }
            }
            *ptr = '\0'; 
            
            
            printf("Evaluating expression for x = %d: %s\n", current_value, modified_expr);
            
            
            YY_BUFFER_STATE my_string_buffer = yy_scan_string(modified_expr);
            yy_switch_to_buffer(my_string_buffer); 
            yyparse();  
            
        }
        for(int i=0; i<721;i++)
        {
            printf("%f\n",arr[i]);
        }
        FILE *gnuplot = popen("gnuplot -persistent", "w");

            if(gnuplot == NULL)
            {
                fprintf(stderr, "Error Opening gnuplot\n");
            }

            fprintf(gnuplot, "set xrange [-360:360]\n");  // x-axis range from 0 to 6
            fprintf(gnuplot, "set yrange [-2:2]\n");
            fprintf(gnuplot, "set grid\n");
            fprintf(gnuplot, "set xtics 60\n");
            fprintf(gnuplot, "plot '-' using 1:2 with lines smooth csplines\n");

            for(int i=0;i<721;i++)
            {
                fprintf(gnuplot, "%lf %lf\n", x1[i], arr[i]);
            }
            fprintf(gnuplot, "e\n");
            fclose(gnuplot);

    }
    plot = 0;
}

expr: SIN OPEN_BRACKET expr CLOSE_BRACKET {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "sin(%s)", $3);  
}
| COS OPEN_BRACKET expr CLOSE_BRACKET {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "cos(%s)", $3);  
}
| TAN OPEN_BRACKET expr CLOSE_BRACKET {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "tan(%s)", $3);  
}
| COT OPEN_BRACKET expr CLOSE_BRACKET {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "1/tan(%s)", $3);  
}
| SEC OPEN_BRACKET expr CLOSE_BRACKET {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "1/cos(%s)", $3);  
}
| COSEC OPEN_BRACKET expr CLOSE_BRACKET {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "1/sin(%s)", $3);  
}
| VARIABLE {
    $$ = malloc(sizeof(char) * 10);
    sprintf($$, "%c", 'x');  
}
| num {
    
    $$ = malloc(sizeof(char) * 10);
    sprintf($$, "%f", $1);  
}
| expr ADD expr {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "(%s + %s)", $1, $3);  
}
| expr MUL expr {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "(%s * %s)", $1, $3);
}
| expr SUB expr {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "(%s - %s)", $1, $3);
}
| expr DIV expr {
    $$ = malloc(sizeof(char) * 100);
    sprintf($$, "(%s / %s)", $1, $3);
}
| OPEN_BRACKET expr CLOSE_BRACKET {
    $$ = $2; 
}





exp: exp ADD exp {
    $$ = $1 + $3;
}
| VARIABLE ADD VARIABLE{
    double x,y;
    if(islower($1))
    {
        x = sym[$1-97];

    }
    else
    {
        x = sym[$1-39];
    }
    if(islower($3))
    {
        y = sym[$3-97];

    }
    else
    {
        y = sym[$3-39];
    }

    $$ = x + y;
}

| exp SUB exp {
    $$ = $1 - $3;
}
| VARIABLE SUB VARIABLE{
    double x,y;
    if(islower($1))
    {
        x = sym[$1-97];

    }
    else
    {
        x = sym[$1-39];
    }
    if(islower($3))
    {
        y = sym[$3-97];

    }
    else
    {
        y = sym[$3-39];
    }

    $$ = x - y;
}

| exp MUL exp {
    $$ = $1 * $3;
}
| VARIABLE MUL VARIABLE{
    double x,y;
    if(islower($1))
    {
        x = sym[$1-97];

    }
    else
    {
        x = sym[$1-39];
    }
    if(islower($3))
    {
        y = sym[$3-97];

    }
    else
    {
        y = sym[$3-39];
    }

    $$ = x * y;
}

| exp DIV exp {                      
    if ($3 != 0) 
    {                   
        $$ = $1 / $3;                
    } 
    else 
    {
        yyerror("Divide Error: Cannot divide by 0\n"); 
    }
}
| VARIABLE DIV VARIABLE{
    double x,y;
    if(islower($1))
    {
        x = sym[$1-97];

    }
    else
    {
        x = sym[$1-39];
    }
    if(islower($3))
    {
        y = sym[$3-97];

    }
    else
    {
        y = sym[$3-39];
    }

    if(y!=0)
    {
        $$ = x / y;
    }
    else
    {
        yyerror("Divide Error: Cannot divide by 0\n");
        
    }
    
}
| SUB exp {                          
    $$ = -$2;                        
}
| exp POW exp {                      
    $$ = pow($1, $3);                
}
| exp MOD exp {                      
    if ($3 != 0) 
    {                   
        $$ = fmod($1, $3);           
    } 
    else 
    {
        yyerror("Modulo Error: Cannot divide by 0\n"); 
    }
}
| LOG OPEN_BRACKET exp CLOSE_BRACKET {   
    $$ = log10($3);                    
}
| LN OPEN_BRACKET exp CLOSE_BRACKET {    
    $$ = log($3);                      
}
| SQRT OPEN_BRACKET exp CLOSE_BRACKET {  
    $$ = sqrt($3);                    
}
| SIN OPEN_BRACKET exp CLOSE_BRACKET {   
    $$ = m == 1 ? sin($3 * M_PI / 180) : sin($3); 
}
| SIN OPEN_BRACKET VARIABLE CLOSE_BRACKET {
    if(islower($3))
    {
        $$ = m == 1 ? sin(sym[$3-97] * M_PI / 180) : sin($3);
    }
    else
    {
        $$ = m == 1 ? sin(sym[$3-39] * M_PI / 180) : sin($3);
    }
    
}
| COS OPEN_BRACKET exp CLOSE_BRACKET {   
    $$ = m == 1 ? cos($3 * M_PI / 180) : cos($3); 
}
| TAN OPEN_BRACKET exp CLOSE_BRACKET {   
    $$ = m == 1 ? tan($3 * M_PI / 180) : tan($3); 
}
| COSEC OPEN_BRACKET exp CLOSE_BRACKET { 
    $$ = m == 1 ? 1 / sin($3 * M_PI / 180) : 1 / sin($3); 
}
| SEC OPEN_BRACKET exp CLOSE_BRACKET {   
    $$ = m == 1 ? 1 / cos($3 * M_PI / 180) : 1 / cos($3); 
}
| COT OPEN_BRACKET exp CLOSE_BRACKET {   
    $$ = m == 1 ? 1 / tan($3 * M_PI / 180) : 1 / tan($3); 
}
| ASIN OPEN_BRACKET exp CLOSE_BRACKET {  
    if ($3 <= 1 && $3 >= -1) 
    {           
        $$ = m == 1 ? asin($3) * 180 / M_PI : asin($3); 
    } 
    else 
    {
        yyerror("ASIN ERROR: Out of Range\n"); 
    }
}
| ACOS OPEN_BRACKET exp CLOSE_BRACKET {  
    if ($3 <= 1 && $3 >= -1) 
    {           
        $$ = m == 1 ? acos($3) * 180 / M_PI : acos($3); 
    } 
    else 
    {
        yyerror("ACOS ERROR: Out of Range\n"); 
    }
}
| ATAN OPEN_BRACKET exp CLOSE_BRACKET {  
    if ($3 <= 1 && $3 >= -1) 
    {           
        $$ = m == 1 ? atan($3) * 180 / M_PI : atan($3); 
    }
}
| OPEN_BRACKET exp CLOSE_BRACKET {       
    $$ = $2;                            
}
| num {                                 
    $$ = $1;                            
}
| constant;
constant : PI {                         
    $$ = M_PI;                          
}
| E {                                   
    $$ = M_E;                           
};



%%
void main() {
    for(int i=0;i<721;i++)
    {
        x1[i] = i-360;
    }
    do {
        flag = 0; count = 0;               
        printf("-> ");       

        // Read input from stdin (terminal)
        char input[1024];  // Adjust size as needed
        if (fgets(input, sizeof(input), stdin) == NULL) {
            perror("Error reading input");
            break;
        }

        // Strip newline character if it's present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Create a new buffer for the terminal input
        YY_BUFFER_STATE buffer = yy_scan_string(input);
        if (!buffer) {
            perror("Error scanning input");
            continue;
        }

        // Switch to the newly created buffer for stdin
        yy_switch_to_buffer(buffer);

        // Parse the terminal input
        int result = yyparse();
        if (result != 0) {
            printf("Parsing failed.\n");
        } else {
            printf("Parsing succeeded.\n");
        }

        // Delete the buffer after parsing
        yy_delete_buffer(buffer);

        if (flag == -1) {                  // Check for errors
            flag = 0;
            yyparse();                     // Retry parsing
        }

    } while (1);                            
}


