#include "myString.h"

int my_strlen(const char * s){
    int i = 0;
    for(; s[i] != '\0'; i++);
    return i;
}

void my_strcpy(char* dest, const char* src){
    int i;
    for(i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    dest[i] = '\0'; 
}

void my_strncpy(char *dest, const char *src, unsigned long long n){
    int i;
    for(i = 0; (i < n) && (src[i] != '\0'); i++){
        dest[i] = src[i];
    }
    dest[i] = '\0'; 
}