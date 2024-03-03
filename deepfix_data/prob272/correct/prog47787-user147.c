#include <stdio.h>
int main(){
    int tn,a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    if(n>2)
     {tn=0;
        for(int i=3;i<=n;i++)
         { tn=a1+a2-2;
            a1=a2;
            a2=tn; } }
    else if(n==1)
     {tn=a1;}
    else
      {tn=a2;}
    printf("%d",tn);
    return 0; }