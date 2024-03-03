#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,n2,n1,i,pos,pos1,pos2,d,carry=0;
	scanf("%d",&n1);
	scanf("%d",&n2);
	if(n1>n2)
	   n=n1;
	else
	   n=n2;
	int num1[n];
	int num2[n];
	for(i=n-n1;i<n1;i++)
	   {scanf("%d",&num1[i]); }
	for(i=n-n2;i<n2;i++)
	   {scanf("%d",&num2[i]); }
	int sum[501];
	pos1=n;pos2=n;
	while((pos1>=0)||(pos2>=0)||(carry!=0)) {
	       d=num1[pos1]+num2[pos2];
	       d=d+carry;
	       carry=d/10;
	       sum[pos]=d%10;
	       pos=pos-1;
	       pos1=pos1-1;
	       pos2=pos2-1; }
	for(i=500;i>=pos;i=i-1)
	    printf("%d",sum[i]);
	return 0; }