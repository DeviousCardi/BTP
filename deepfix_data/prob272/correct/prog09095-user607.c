#include <stdio.h>
int main(){
            int Tn,a,b,c,i;
            scanf("%d%d%d",&a,&b,&c);
            for(i=3;i<=c;i++)
                { Tn=a+b-2;
                  b=a;
                  a=Tn; }
           if(c==1) printf("%d",a);
            else if (c==2)printf("%d",b);
            else printf("%d",Tn);
    return 0; }