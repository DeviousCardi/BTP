#include <stdio.h>
int main(){
    int n,p,i,j,k,sum1,sum2;
    scanf("%d",&n);
    p=2*n;
    int a[p];
    for(i=0;i<p;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<1;j++){
        sum1=1;
        for(k=1;k<p;k++){
            if(a[k+j]!=a[j])
            sum1=sum1+1; } }
    for(j=1;j<n;j++){
        sum2=1;
        for(k=1;k<p-j;k++){
            if(a[k+j]!=a[j])
            sum2=sum2+1; }
        if(sum1<sum2)
        sum1=sum2; }
    printf("%d",sum2);
    return 0; }