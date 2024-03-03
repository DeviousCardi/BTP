#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d,%d,%d",&a,&b,&c);
if((a+b>c)&&(b+c>a)&&(c+a>b)){
      if(b*b==(a*a+c*c)){
         printf(" Right Triangle"); }
     else{
         printf("Not Right Triangle"); } }
else {
         printf("Cannot form triangle"); }
	return 0; }