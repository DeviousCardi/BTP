#include <stdio.h>
#include <stdlib.h>
int main() {
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>0&&b>0&&c>0) {
if((a+b<c)||(a+c<b)||(b+c<a)||(a-b>c)||(a-c>b)||(b-c>a))
printf("Cannot form a Triangle");
else {
        if(a*a+b*b>c*c)
        printf("Acute Triangle");
        else
            printf("Not Acute Triangle"); } }
else
printf("Cannot form a Triangle);
	return 0; }