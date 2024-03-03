#include <stdio.h>
int main(){
    int n,T1,T2,s;
    scanf("%d%d%d",&T1,&T2,&n);
    for(i=1;i<=(n-4);i=i+1) {
        s=T1+T2-2;
         T1=T2;
          T2=s; }
    printf("%d",T2);
    if(n==1) {
        printf("%d",T1); }
    if(n==2) {
        printf("%d",T2); }
    return 0; }