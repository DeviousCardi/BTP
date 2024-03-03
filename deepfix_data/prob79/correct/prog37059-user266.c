#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,*C,i,t=0,t1=0,t2=0,b1=0,b2=0;
	scanf("%d",&n);
	C=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	   { scanf("%d",&C[i]); t+=C[i];}
    for(i=0;(t1<t/2&&t2<t/2);i++) {
           b1++;
           t1+=C[i];
           b2++;
           t2+=C[n-i-1]; }
    printf("%d %d",b1,b2);
	return 0; }