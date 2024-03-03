#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a==b) {
	        if(b>c)
	            printf("%d",c);
	        else
	            printf("%d",b); }
	else if(a==c) {
	        if(b>c)
	            printf("%d",c);
	        else
	            printf("%d",b); }
	else if(c==b) {
	        if(b>a)
	            printf("%d",a);
	        else
	            printf("%d",b); }
	else {
	    (a>b)?((b>c)?printf("%d",b):((a>c)?printf("%d",c):printf("%d",a)):((a>c)?printf("%d",a):((b>c)?printf("%d",c):printf("%d",b)))); }
	return 0; }