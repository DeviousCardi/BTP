#include <stdio.h>
int main(){
    int a1,a2,n,t3,i;
    scanf("%d %d %d",&a1,&a2,&n);
    if(n==1) printf("%d",a1);
    else if(n==2) printf("%d",a2);
    else {
        t3=a1+a2-2;
        while(i<=n){
            a2=t3;
            a1=a2; }
        printf("%d",a1+a2-2); }
    return 0; }