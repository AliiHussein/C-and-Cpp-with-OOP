#include <stdio.h>
#include <string.h>
#include "myString.h"


void main(){
    char s[20];
    char s2[20];
    int num;

    printf("Enter s: ");
    scanf("%[^\n]%*c", s);

    printf("Enter num: ");
    scanf("%d", &num);

    my_strncpy(s2, s, num);

    printf("My Strncpy: s: %s    s2: %s \n",s,s2);
}