#include <stdio.h>
int main() {
int n,m;
int a;
int sum[10];
int s=0;
scanf("%d %d",&n,&m);
int i,j;
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        scanf("%d",&a);
        s=s+a; }
    sum[i-1]=s; }
int max=0;
    for(i=0;i<n;i++){
        if(sum[i]>max);
        max=sum[i];
        printf("%d",max); }
    return 0; }