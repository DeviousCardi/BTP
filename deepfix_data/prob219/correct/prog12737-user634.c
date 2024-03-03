#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int m,n;
    m=a-b;
    n=b-c;
    if((m!=0 && n!=0)&& a!=c) {
        if((m>0 && n>0)|| (m<0 && n<0))
        printf("%d",b);
        else if(m>0 && n<0)
        printf("%d",c);
        else if(m<0 && n>0 && c>a)
        printf("%d",c);
        else if(m<0 && n>0 && a>c)
        printf("%d",a); }
	else if(m==0) {
	    if(a>c)
	    printf("%d",c);
	    else
	    printf("%d",a); }
	else if(n==0) {
	    if(b>a)
	    printf("%d",a);
	    else
	    printf("%d",b); }
	else if(a==c) {
	    if(a>b)
	    printf("%d",b);
	    else
	    printf("%d",a); }
	return 0; }