#include <stdio.h>
int main(){
    int n,i,j,count=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=2;i<=100;i++) {
        scanf("%d",&a[i]); }
    for(i=1;i<=n;i++) {
        for(j=i+1;j<=n;j++) {
            if(a[j]!=a[i])
            count++; }
        sum++;
        break; }
    printf("%d %d",sum,count);
    return 0; }