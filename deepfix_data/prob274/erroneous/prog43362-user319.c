#include <stdio.h>
int main(){
    int n,i,j;
    int a[n],sum[n];
    scanf("%d\n",&n);
    int count=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(j=1;j<=n;j++){
        if((1<=a[j]<=n)&&(a[j]!=j)){
            a[j]=a[a[j]];
            count=count+1; } } }
    return 0; }