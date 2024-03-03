#include <stdio.h>
int main(){
    int a1,a2,n,temp,t,tn;
    scanf("%d%d%d",&a1,&a2,&n);
    t=a1;
    tn=a2;
 for(int i=3;i<=n;i++) {
     temp=tn;
     tn=temp+t-2;
     t=temp; }
 printf("%d",tn);
    return 0; }