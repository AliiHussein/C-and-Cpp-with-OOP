#include "std.h"

void copy_string(uint8 *, uint8 *);

void main(){
	uint8 s1[] = "Hello", s2[6] = "hi";
	printf("s1= %s s2= %s\n", s1,s2);
	copy_string(s1,s2);
	
}

void copy_string(uint8 *s1, uint8 *s2){
	uint8 i;
	for(i = 0; s1[i] != 0; i++){
		s2[i] = s1[i];
		//printf("%c %c\n", *(s1+i), *(s2+i));
	}
	s2[i] = 0;
	//printf("s1 = %s s2 = %s\n", s1,s2);
	printf("s1= %s ,s2= %s",s1,s2);
}