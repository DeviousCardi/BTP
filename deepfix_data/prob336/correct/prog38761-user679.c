#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b) {
        if((a*a+b*b-c*c)>0 && (b*b+c*c-a*a)>0 && (c*c+a*a-b*b)>0)
        printf("Acute Triangle");
        else
        printf("Not Acute Triangle"); }
    else
    printf("Cannot form a Triangle");
	return 0; }