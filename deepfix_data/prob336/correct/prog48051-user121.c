#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<c)
    printf("Cannot form a Triangle");
    else
    if(a+c<b)
    printf("Cannot form a Triangle");
    else
    if(c+b<a)
    printf("Cannot form a Triangle");
	return 0; }