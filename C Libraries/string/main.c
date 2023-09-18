#include <stdio.h>
#include <string.h>
#include "myString.h"

void main(){
    char s[20];
    char s2[20];
    scanf("%[^\n]%*c", s);

    printf("%d, %d", my_strlen(s), strlen(s));
}