#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a+b>c){
	printf("Obtuse Triangle");
	}else{
	    if(a==b&&b<2*a&&a+b>c){
	        printf("Not Obtuse Triangle");
	    }else{
	        if(c*c==a*a+b*b&&a+b>c){
	        printf("Not Obtuse Triangle");
	    }else{
	        if(a+b<=c){
	            printf("Cannot form a Triangle"); } } } }
	return 0; }