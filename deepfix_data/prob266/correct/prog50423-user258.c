#include <stdio.h>
int main(){
    int n,sum=0,i,j,m=2016;
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        n=n/10;
        sum=sum+i; }
    for(j=1;j<m+100;j++){
        if((m+j)%sum==0){
            printf("%d",m+j);
            break; } }
    return 0; }