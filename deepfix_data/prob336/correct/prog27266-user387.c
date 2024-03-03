#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a*a+b*b)>(c*c)){
    printf("Acute Triangle"); }
else{printf("Not Acute Triangle"); }
if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)){
    printf("Triangle"); }
else{printf("Cannot form a Tringle"); }
	return 0; }