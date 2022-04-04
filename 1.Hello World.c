#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
    char s[200];
    
    scanf("%[^\n]%*c", s);
    printf("Hello, World! \n%s\n", s);
    
    return 0;
}