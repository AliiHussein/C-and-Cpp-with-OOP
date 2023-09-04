#include <stdio.h>
#include <stdlib.h>

void timeConversion(char* s);

void main(){
	char* str1 = "12:05:45AM";
  
    // explicit type casting
    timeConversion(str1);
	
}


void timeConversion(char* s) {
	printf("%s\n", s);
	int digit1, digit2, num;
	char new_s[9];
	
	digit1 = s[0] - '0';
	digit2 = s[1] - '0';
	num = digit1 * 10;
	num += digit2;
	printf("%d%d, num is %d\n", digit1, digit2, num);
	
    if(s[8]=='P' && s[9]=='M'){
		if(num != 12){
			num += 12;
			printf("Num after addition: %d\n", num);
		}
    }
	if(s[8]=='A' && s[9]=='M'){
		if(num == 12){
			num -= 12;
			printf("Num after addition: %d\n", num);
		}
	}
	
	printf("num/10= %c, num%10= %c\n", num/10 + '0', num%10 + '0');
	char h1 = num/10 + '0';
	char h2 = num%10 + '0';
	printf("before: %s\n", s);
	new_s[0] = h1;
	new_s[1] = h2;
	new_s[2] = s[2];
	new_s[3] = s[3];
	new_s[4] = s[4];
	new_s[5] = s[5];
	new_s[6] = s[6];
	new_s[7] = s[7];
	new_s[8] = '\0';
	
	printf("After: %s\n", new_s);	
}