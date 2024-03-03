#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    int max;
    int p,q;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    max=a;p=b;q=c;
    if else(b>=a && b>=c)
    max=b;p=a;q=c;
    else
    max=c;p=a;p=b;
    if(max>=p+q)
    printf("Cannot form a Triangle");
    else {
        if(max*max>p*p+q*q)
        printf("Obtuse Triangle");
        else
        printf("Not Obtuse Triangle"); }
	return 0; }