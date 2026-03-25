#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("enter the string: ");
    scanf("%s", s);
    int l = 0, i;
    char a;
    for(l = 0; s[l] != '\0'; l++) {}
    printf("length of the string : %d\n", l);
    for(i = 0; i < (l / 2); i++) {
        a = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = a;
    }
    printf("reverse string : ");
    puts(s);
    return 0;
}
