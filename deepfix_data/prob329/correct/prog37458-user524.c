#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
    	scanf("%d%d%d",&a,&b,&c);
    if((a+b<=c)||(b+c<=a)||(c+a<=b)&&(a==0)&&(b==0)&&(c==0)) {
        printf("Cannot form a Triangle"); }
    if((a+b>c)||(b+c>a)||(c+a>b)) {
        if((a*a+b*b)==(c*c)||(c*c+b*b)==(a*a)||(a*a+c*c)==(b*b)) {
    	    printf("Right Triangle"); } }
	else if((a*a+b*b)!=(c*c)||(c*c+b*b)!=(a*a)||(a*a+c*c)!=(b*b))
	        printf("Not Right Triangle");
	return 0; }