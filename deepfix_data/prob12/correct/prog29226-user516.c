#include <stdio.h>
int main(){
    int n,p,i,j,k,sum1,sum2=100;
    scanf("%d",&n);
    p=2*n;
    int a[p];
    for(i=0;i<p;i++){
        scanf("%d",&a[i]); }
    for(j=0;j<p;j++){
        sum1=1;
        for(k=1;k<=p-j;k++){
            if(a[k+j]!=a[j])
            sum1=sum1+1; }
        if(sum1<sum2)
        sum2=sum1; }
    printf("%d",sum2);
    return 0; }