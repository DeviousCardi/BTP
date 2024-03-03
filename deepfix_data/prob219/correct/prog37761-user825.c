#include <stdio.h>
int main() {
 int a,b,c;
 scanf("%d%d%d",&a,&b,&c);
 if(a==b){if(a>c) printf("%d",c);
          else printf("%d",a);}
 else if(b==c){if(a>b)printf("%d",b);
          else printf("%d",a);}
 else if(c==a){if(a>b)printf("%d",b);
         else printf("a");}
   {if(a>b){if(a>c){if(b<c)printf("%d",b);else printf("%d",c);}
              else printf("%d",a);}
        else if(b>c){if(a>c) printf("%d",a); else printf("%d",c);}
             else printf("%d",b);}
return 0; }