#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c&&c>a){
	printf("Obtuse Triangle");
	}else{
	    if(a==c&&b<2*a&&a+b>c&&c<a){
	        printf("Not Obtuse Triangle");
	    }else{
	        if(a+b>c&&a>b&&b>c&&c*c==a*a+b*b){
	        printf("Not Obtuse Triangle");
	    }else{
	        if(a+b<=c){
	            printf("Cannot form a Triangle"); } } } }
	return 0; }