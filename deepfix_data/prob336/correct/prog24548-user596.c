#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
    if((a*a+b*b>c*c)&&(a*a+b*b>c*c)&&(b*b+c*c>a*a)&&(c*c+a*a>b*b)){
    printf("Acute Triangle");}
    else {
        printf("Not Acute Triangle"); }
    if ((a+b<c)&&(b+c<a)&&(a+c<b)){
    printf("Cannot form a Friangle");}
	return 0; }