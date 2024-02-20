/* Program to check if a character is a capital letter, small letter, digit or a special character*/

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    (ch >= 'A' && ch <= 'Z') ? printf("The character is a capital letter.\n") :
    (ch >= 'a' && ch <= 'z') ? printf("The character is a small letter.\n") :
    (ch >= '0' && ch <= '9') ? printf("The character is a digit.\n") :
    printf("The character is a special character.\n");

    return 0;
}
