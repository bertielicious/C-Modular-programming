/*You tube Portfolio Cources 
C Modular Programming 
step 1: put function declarations into library.h file
int add (int x, int y);
int sub (int x, int y);

step 2: put function definitions (impimentation) into library.c file
int add (int x, int y)
{
return x + y;
}

int sub (int x, int y)
{
return x - y;
}

step 3: above main() function, add #include "library.h"
*/

#include <stdio.h>
#include "library.h"
void app_main(void)
{
    printf("%d + %d = %d\n", 4,5, add(4,5));    // 9
    printf("%d - %d = %d\n", 10,7, sub(10,7));   // 3
}
