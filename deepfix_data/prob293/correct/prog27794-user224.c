#include <stdio.h>
#include <stdlib.h>
int main()
{   int a,b,c,tmp;
    scanf("%d%d%d",&a,&b,&c);
    if(a>c){
        tmp=a;
        a=c;
        c=tmp; }
     if(b>c){
        tmp=b;
        b=c;
        c=tmp; }
    if(a+b<=c)    printf("Cannot form a Triangle");
    else {
    if(a*a+b*b>=c*c)  printf("Not Obtuse Triangle");
    else  printf("Obtuse Triangle"); }
    return 0; }