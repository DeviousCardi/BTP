#include <stdio.h>
int main(){
    int n,sum=0,i,j,m;
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        n=n/10;
        sum=sum+i; }
    scanf("%d",&m);
    printf("%d",m);
    for(j=1;j<n+100;j++){
        if((n+j)%sum==0){
            printf("%d",n+j);
            break; } }
    return 0; }