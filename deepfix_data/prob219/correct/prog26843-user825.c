#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a<b){if(a<c){if(b<c){if(c==b) printf("%d",a);else printf("%d",b);}
                     else {if(b==c) printf("%d",a);else printf("%d",c);}}
             else{if(a==b) printf("%d",c);else printf("%d",a);}}
 if(b>c)
           if(a==b) printf("%d",c); else printf("%d",b);
          return 0;}