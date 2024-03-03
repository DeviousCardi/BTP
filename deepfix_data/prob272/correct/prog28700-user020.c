#include <stdio.h>
int main(){
    int i,n,a1,a2,ans=0;
    scanf("%d%d%d",&a1,&a2,&n);
    if(n==1)
    printf("%d",a1);
    else if(n==2)
    printf("%d",a2);
    else if (n>2) {
        for(i=3;i<=n;i++) {
            ans=a1+a2-2;
            a1=ans; } }
    return 0; }