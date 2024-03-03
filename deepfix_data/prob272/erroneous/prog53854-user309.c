#include <stdio.h>
int T(n)(int n,int a1,int a2){
    int n,a1,a2,t;
    t=a1+a2-2;
    for(i=3;i<=n;i++) {
        a1=a2;
        a2=t;
        t=a1+a2-2; }
    return t; }
int main(){
    int n,a1,a2,t;
    scanf("%d %d %d",&n,&a1,&a2);
    p=T(n);
    printf("%d",p);
    return 0; }