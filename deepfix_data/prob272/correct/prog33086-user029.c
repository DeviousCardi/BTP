#include <stdio.h>
int main(){
    int a1,a2,n,temp,t1,t2;
    scanf("%d,%d,%d",&a1,&a2,&n);
    t1=a1;
    t2=a2;
 for(int i=3;i<=n;i++) {
     temp=t2;
     t2=t2-t1;
     t1=t2; }
 printf("%d",t2);
    return 0; }