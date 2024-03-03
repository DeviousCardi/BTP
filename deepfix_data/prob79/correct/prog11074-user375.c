#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i,sum=0,num=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i]; }
    int c=a[0],d=a[n-1];
    for(i=0;i<2*n;i++){
        if(c+d>=sum)
            break;
        if(c<d){
            c=c+a[i];
            num++; }
        else
            d=d+a[n-i-1]; }
    n==1?printf("1 0"):printf("%d %d",num,n-num);
    return 0; }