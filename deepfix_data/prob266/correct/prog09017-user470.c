#include <stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    while(n>0){
        sum=sum+(n%10);
        n=n/10; }
    for(int i=2016;i<1000000000;i++){
        if(i%sum==0){
            printf("%d",i);
            break; } }
    return 0; }