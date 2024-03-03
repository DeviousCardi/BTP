#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c,s,p,k,m;
scanf("%d%d%d",&a,&b,&c);
s=a+b+c;
p=(a*a+b*b+c*c);
if(a>b)
k=a;
else
k=b;
if(k>c)
m=k;
else
m=c;
if(s<(2*m))
printf("Cannot form a Triangle");
else
{if(p<(2*c*c))
printf("Obtuse Triangle");
else
printf("Not Obtuse Triangle"); }
	return 0; }