#include <stdio.h>
#include <string.h>
#include "myString.h"


void main(){
    char s[20];
    char s2[20];
    int num;

    printf("Enter s: ");
    scanf("%[^\n]%*c", s);

    printf("Enter s2: ");
    scanf("%[^\n]%*c", s2);

    // printf("Enter num: ");
    // scanf("%d", &num);
    my_strcat(s2, s);

    printf("My Strcat: %s\n",s2);
}