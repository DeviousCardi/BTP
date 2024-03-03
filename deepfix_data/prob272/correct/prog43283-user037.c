#include <stdio.h>
int main(){
    int a1,a2,n,t3;
    int i=1;
    scanf("%d %d %d",&a1,&a2,&n);
    t3=a1+a2-2;
    if(n==1) printf("%d",a1);
    else if(n==2) printf("%d",a2);
    else {
        while(i<=n-3){
            a2=t3;
            a1=a2;
            t3=a1+a2-2;
            i=i+1; }
        printf("%d",t3); }
    return 0; }