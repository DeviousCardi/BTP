#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int m,n;
    m=a-b;
    n=b-c;
    if((m>=0 && n>=0)|| (m<=0 && n<=0))
    printf("%d",b);
    if(m>=0 && n<=0)
    printf("%d",c);
    if(m<=0 && n>=0 && c>=a)
    printf("%d",c);
    else
    printf("%d",a);
	return 0; }