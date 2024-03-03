#include <stdio.h>
int main(){
    int r,i,j,n,year=2016,sum=0;
    scanf("%d",&n);
    for(i=0;i<4;i++) {
        r=n%10;
        sum=sum+r; }
    for(j=0;j<=sum;j++) {
        if(year%sum==0) {
            printf("%d",year); }
        year=year+1; }
    return 0; }