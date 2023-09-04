#include <stdio.h>
int main()
{
  char a[] = {1,2,3,4,5,6,7,8};
	int* p = &a[4];
	printf("0x%x",*p);    
 return 0;
}