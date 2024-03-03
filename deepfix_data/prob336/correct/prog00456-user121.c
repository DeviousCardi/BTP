#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c)
    printf("Cannot form a Triangle");
    else
    if(a+c<=b)
    printf("Cannot form a Triangle");
    else
    if(c+b<=a)
    printf("Cannot form a Triangle");
    else
    if(a&&b<=c){
    if(a*a+b*b>c*c)
    printf("Acute Triangle");
    }else
    if(a&&c<=b){
    if(a*a+c*c>b*b)
    printf("Acute Triangle");
    }else
    if(c&&b<=a){
    if(c*c+b*b>a*a)
    printf("Acute Triangle");
    }else
    printf("Not Acute Triangle");
	return 0; }