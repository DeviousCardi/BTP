#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,sum=0,x;
	scanf("%d",&a);
    for(x=1;x<a;x++) {
     if (a%x==0)
    sum=sum+x;}
    if(a==sum)
    printf("YES");
    else
    printf("NO");
	return 0; }