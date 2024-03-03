#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a+b>c)&&(b+c>a)&&(a+c>b)){
    printf("TRIANGLE"); }
else{printf("CANNOT FORM A TRIANGLE"); }
if(a*a+b*b>c*c){
    printf("ACUTE"); }
else{printf("NOT ACUTE"); }
	return 0; }