#include <stdio.h>
int main(){
    int n,sum=0,i,j,k;
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        n=n/10;
        sum=sum+i; }
    while(j=1){
        if((n+j)%sum==0){
            printf("%d",n+j);
            break; }
        j++; }
    return 0; }