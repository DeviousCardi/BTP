#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n%10; }
    for (int i=2016;1;i++){
        if (i%sum==0){
            printf("%d",i);break; } }
    return 0; }