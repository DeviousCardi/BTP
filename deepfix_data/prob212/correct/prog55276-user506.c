#include <stdio.h>
int main(){
    int t,h,te,o,s,i,k;
    scanf("%d%d%d%d",&t,&h,&te,&o);
    s=t+h+te+o;
    for(i=2016;i<=2100;i=i+1) {
        k=i%s;
        if(k==0)
        break; }
    printf("%d",i);
    return 0; }