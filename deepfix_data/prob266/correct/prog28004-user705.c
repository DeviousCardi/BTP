#include <stdio.h>
int main(){
    int n,r,sum=0;
    scanf("%d",&n);
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10; }
    for(int i=2016;i>=2016;i++){
        if(i%sum==0){
            printf("%d",i);
            break; } }
    return 0; }