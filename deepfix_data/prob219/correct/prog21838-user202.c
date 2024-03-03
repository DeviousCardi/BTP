#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c,n1,n2,n3;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a>b){
	    if(a>c)
	    n1=a;
	    else
	    n2=a; }
	else{
	    if(b>c)
	    n1=b;
	    else
	    n2=b; }
	if(a==b){
	    if(a>c)
	    n2=c; }
	printf("%d",n2);
	return 0; }