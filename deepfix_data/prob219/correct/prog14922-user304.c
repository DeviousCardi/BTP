#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b!=c&&c!=a&&a!=b)
    {if(a>b) {
        if(b>c){printf("%d",b);}
    else
    {if(c>a){printf("%d",a);}} }
    else
    {if(a<c){if(b>c){printf("%d",c);}else{printf("%d",b);}}
    else
    {printf("%d",a);}
    };}
    if(b==c)
    {if(b>a){printf("%d",a);}
    else printf("%d",b);}
    if(c==a)
    {if(c<b){printf("%d",c);}
    else printf("%d",b);}
    if(a==b)
    {if(c<b){printf("%d",c);}
    else printf("%d",b);}
return 0; }