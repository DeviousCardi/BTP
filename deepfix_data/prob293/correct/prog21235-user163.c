#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&b+c>a&&c+a>b&&a*a+b*b>c*c&&b*b+c*c>a*a&&a*a+c*c>b*b){
	printf("Obtuse Triangle");
	}else{
	    if(a==c&&b<2*a&&a+b>c&&b+c>a&&c+a>b&&c<b){
	        printf("Not Obtuse Triangle");
	    }else{
	        if(a+b>c&&b+c>a&&c+a>b&&c*c==a*a+b*b&&b>a){
	        printf("Not Obtuse Triangle");
	    }else{
	        if(a+b<=c){
	            printf("Cannot form a Triangle"); } } } }
	return 0; }