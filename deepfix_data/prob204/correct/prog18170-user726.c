#include <stdio.h>
#include <stdlib.h>
int main() {
	long long int num, r , c_num, n_num=0;
	scanf("%lld", &num);
	c_num=num;
	while(c_num)  {
	    r=c_num%10;
	    c_num=c_num/10;
	    n_num=n_num*10 + r; }
	if (n_num==num)
	printf("\nYES");
	else
	printf("\nNO");
	return 0; }