#include <stdio.h>
int main(){
    int n,a1,a2,i,t1,t2;
     scanf("%d%d%d",&a1,&a2,&n);
    int sum=0;
    if(n==1) {
        printf("%d",a1); }
    else if(n==2){
        printf("%d",a2); }
    for(i=3;i<=n;i++) {
        sum=a1+a2-2;
        a2=a1;
        a1=sum; }
    printf("%d",sum);
     return 0; }