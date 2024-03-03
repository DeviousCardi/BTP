#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) {
        if(b>c){printf("%d",b);}
    else
    {if(c<a){printf("%d",c);}} }
    else
    {if(b<c){printf("%d",b);}
    else
    {printf("%d",a);}
    };
return 0; }