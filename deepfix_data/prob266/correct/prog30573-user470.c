#include <stdio.h>
int main(){
    int n,sum=0,count=2016;
    scanf("%d",&n);
    while(n>0){
        sum=sum+(n%10);
        n=n/10; }
    while(count%sum!=0){
        if(count%sum==0){
            printf("%d",count);
            break; }
        count++; }
    return 0; }