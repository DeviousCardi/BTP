#include <stdio.h>
int main(){
            int Tn,Tn_1,Tn_2,a,b,c,i;
            scanf("%d%d%d",&a,&b,&c);
            Tn_1=a;
            Tn_2=b;
            for(i=3;i<=c;i++)
                { Tn=Tn_1+Tn_2-2;
                  Tn_2=Tn_1;
                  Tn_1=Tn; }
           if(c==1) printf("%d",a);
            else if (c==2)printf("%d",b);
            else printf("%d",Tn);
    return 0; }