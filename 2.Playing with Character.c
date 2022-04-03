#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
    char ch;
    char sen[200];
    char s[20];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n"); // berfungsi untuk menghilangkan newline, agar scanf dari sen tidak langsung berhernti (error)
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}