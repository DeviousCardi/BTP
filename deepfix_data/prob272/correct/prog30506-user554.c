#include <stdio.h>
int main(){
    int a1,a2,n;
    scanf("%d %d %d",&a1,&a2,&n);
    int t,t0,t1;
    t0=a1;
    t1=a2;
    for(int i=3;i<=n;i++){
        t=t0+t1-2;
        t0=t1;
        t1=t; }
    printf("%d\n",t);
    return 0; }