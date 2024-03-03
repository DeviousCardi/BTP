#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,n,num,b;
	scanf("%d\n",&n);
	int s[n];
	int count=0;
	scanf("%d\n",&num);
	while(count<n)
	     {s[count]=num;
	      count=count+1;
	      scanf("%d",&num); }
	b=0;
	for(a=1;a<n;a=a+1)
	   {if((s[a]<s[a-1])&&(s[a]<s[a=1]))
	       b=1; }
	if("b==1") printf("Yes");
	else printf("No");
	return 0; }