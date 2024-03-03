#include <stdio.h>
#include <stdlib.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a!=b&&a!=c&&b!=c)
    {if(a<b)
            {if(a<c)
                    {if(b<c)printf("%d",b);
                    else printf("%d", c); }
            else printf("%d",a); }
    else         {if(b>c) printf("%d", b);
                  else{if(a>c){printf("%d",c);}
                        else{printf("%d",a);} } } }
    if(a==b||b==c||c==a){
    if(a=b){if(a>c) printf("%d",c);
            else printf("%d", a);}
    if(b=c){if(b>a) printf("%d",a);
                else printf("%d", b);}
    if(c=a){if(b>a) printf("%d", a);
            else printf("%d",b); } }
	return 0; }