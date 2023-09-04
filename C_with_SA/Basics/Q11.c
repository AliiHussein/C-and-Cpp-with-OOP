#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    long sum= 0;
	char n1=0;
    while(n!=0){
		n1=n%10;
		sum=sum+n1;
		n=n/10;
	}
	printf("%d", sum);
    
    return 0;
}