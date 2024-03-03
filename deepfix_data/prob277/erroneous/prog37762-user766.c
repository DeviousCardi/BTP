#include <stdio.h>
#include <stdlib.h>
int main()
int a;
int r;
int n;
scanf("%d%d%d",&a,&r,&n);
int term;
int i;
int s=0;
for (i=1;i<=n;i=i+1) {
    term=a*(pow(r,i-1));
    s=s+term; }
printf("%d",s);
	return 0; }