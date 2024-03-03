#include <stdio.h>
int main(){
    int a1,a2,n,Tn,Tn_1,Tn_2,i=2;
    scanf("%d%d%d",&a1,&a2,&n);
    if(n==1)
     {printf("%d",a1);}
    else if(n==2)
     {printf("%d",a2);}
    Tn_2=a1;
    Tn_1=a2;
    else(n>2) {
      while((i=2)&&(i<n)) {
        Tn=Tn_1+Tn_2-2;
        printf("%d ",Tn);
        Tn_1=Tn_2;
        Tn_1=Tn; } }
    return 0; }