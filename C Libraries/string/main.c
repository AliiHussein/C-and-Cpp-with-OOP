#include <stdio.h>
#include <string.h>
#include "myString.h"


void main(){
    char s[20];
    char s2[20];
    scanf("%[^\n]%*c", s);

    strcpy(s2, s);

    printf("Original Strcpy: s: %s    s2: %s \n",s,s2);

    scanf("%[^\n]%*c", s);

    my_strcpy(s2, s);

    printf("My Strcpy: s: %s    s2: %s \n",s,s2);
}