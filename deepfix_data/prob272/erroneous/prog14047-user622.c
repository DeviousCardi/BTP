#include <stdio.h>
int main(){
 int i,a1,a2,n,Tn;
 scanf("%d%d%d",&a1,&a2,&n);
 if(n==1)
 {Tn=a1;}
 else if(n==2)
 {Tn=a2;}
 else if(n>2)
 {Tn=0;}
 for(i=1;i<=n;i++)
 {printf("%d",Tn);}
printf("");}
    return 0; }