#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,n,i;
	scanf("%d\n",&n1);
	scanf("%d\n",&n2);
	int num1,num2;
	scanf("%d\n",&num1);
	scanf("%d\n",&num2);
	int a[500];
	int b[500];
	int add[501];
	if (n1>n2)
	{n=n1; }
	else
	{n=n2; }
	for (i=n-1;i>=0;i--)
	{a[i]=num1%10;
	b[i]=num2%10;
	num1=num1/10;
	num2=num2/10; }
	int k=n,carry=0,j=n-1;
	 for (i=n-1;i>=0;i--)
	 {   printf("a[%d]+b[%d]+carry=%d+%d+%d\n",i,j,a[i],b[j],carry);
	     add[k]=(a[i]+b[j]+carry)%10;
	     carry=(a[i]+b[j])/10;
	     printf("add[%d]=%d\n",k,add[k]);
	     k--;
	     j--; }
	 add[0]=carry;
	 if(carry!=0)
	 printf("%d",carry);
	 for (i=1;i<=n;i++) {
	 printf("%d",add[i]); }
	return 0; }