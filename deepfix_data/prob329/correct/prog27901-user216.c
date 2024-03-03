#include <stdio.h>
#include <stdlib.h>
int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a!=0&&b!=0&&c!=0){
	if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b&&a!=0&&b!=0&&c!=0){
	    printf("Right Triangle");}
	    else
	    {if(a+b>c&&b+c>a&&a+c>b){
	        printf("Not Right Triangle"); }
	    else{printf("Cannot form a Triangle");} } }
	else{
	    printf("Cannot form a Triangle"); }
	return 0; }