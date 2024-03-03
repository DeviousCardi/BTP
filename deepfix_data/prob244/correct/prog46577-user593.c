#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,tax;
	scanf("%d",&a);
	if (a<=200000)
    tax=0;
	else if ((a>=200001)&&(a<=500000))
	tax=0.1*(a-200000);
	else if ((a>=500001)&&(a<=1000000))
	tax=30000+(0.2*(a-500000));
    else
	tax=130000+(0.3*(a-1000000));
	printf("%0.2f",tax);
	return 0; }