#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,m,n;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b) {
	    if(a>c)
	        printf("%d",c);
	    else
	        printf("%d",a); }
	else {
	    if(a>b) {
	        m=a;
	        n=b; }
	    else {
	        m=b;
	        n=a; }
	    if(n>=c)
	        printf("%d",c);
	    else {
	        if(c<m)
	            printf("%d",c);
	        else if(c==m)
	            printf("%d",n);
	        else
	            printf("%d",m); } }
	return 0; }