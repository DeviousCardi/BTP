#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,sum=0,k,x=1;
	scanf("%d",&a);
    for(x=1;x<a;a%x==0){
    k=x;
    sum=sum+k;
    if(a==sum)
    printf("YES\n");
    else
    printf("NO"); }
	return 0; }