#include <stdio.h>
#include <stdlib.h>
int main()
{long int n;
 int i,sum=0;
 scanf("%d",&n);
 for(i=1;i<=(n/2);i++) {
     if(n%i==0)
     sum=sum+i; }
 if(n==sum)
 printf("YES");
 else
 printf("NO");
	return 0; }