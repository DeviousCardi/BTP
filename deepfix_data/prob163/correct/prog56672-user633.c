#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,n2,n1,i,pos=500,pos1,pos2,d,carry=0;
	char temp;
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1>n2)
	   n=n1;
	else
	   n=n2;
	char  num1[n];
	char  num2[n];
	for(i=0;i<n1;i++)
	   {scanf("%c",&temp);
	    num1[i]=temp;
	    printf("%c",num1[i]); }
	for(i=n-n2;i<n;i++)
	   {scanf("%d",&num2[i]); }
	for(i=0;i<n-n1;i++)
	   {num1[i]=0; }
	for(i=0;i<n-n2;i++)
	   {num2[i]=0; }
	int sum[501];
	pos1=n-1;pos2=n-1;
	while((pos1>=0)&&(pos2>=0)) {
	       d=num1[pos1]+num2[pos2];
	       d=d+carry;
	       carry=d/10;
	       sum[pos]=d%10;
	       pos=pos-1;
	       pos1=pos1-1;
	       pos2=pos2-1; }
	return 0; }