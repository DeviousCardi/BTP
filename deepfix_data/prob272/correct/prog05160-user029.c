#include <stdio.h>
int main(){
    int a1,a2,n,temp,t1,t2,tn;
    scanf("%d%d%d",&a1,&a2,&n);
    t1=a1;
    t2=a2;tn=a2;
 for(int i=3;i<=n;i++) {
     temp=tn;
     tn=temp+t1-2;
     t1=t2; }
 printf("%d",tn);
    return 0; }