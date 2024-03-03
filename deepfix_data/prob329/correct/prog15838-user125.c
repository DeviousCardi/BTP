#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
if(b*b== a*a+c*c){
    printf("Rght Triangle"); }
     else if(b*b<=a*a+c*c){
         printf("Not Right Triangle"); }
     else {
         printf("Cannot form triangle"); }
	return 0; }