#include <stdio.h>
int Tn(int n,int a1,int a2){
    int t,i;
    t=a1+a2-2;
    for(i=4;i<n;i++) {
        a1=a2;
        a2=t;
        t=a1+a2-2; }
    return t; }
int main(){
    int n,a1,a2,p;
    scanf("%d %d %d",&a1,&a2,&n);
    p=Tn(n,a1,a2);
    printf("%d",p);
    return 0; }