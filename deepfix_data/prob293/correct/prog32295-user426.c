#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,d=a*a,e=b*b,f=c*c;
	scanf("%d%d%d",&a,&b,&c);
	if((c<a+b)&&(a<b+c)&&(b<a+c)){
	    if((d>e+f)&&(e>d+f)&&(f>d+e))
	    printf("Obtuse Triangle");
	    else
	    printf("Not Obtuse Triangle"); }
	else
	printf("Cannot Form a Triangle");
	return 0; }