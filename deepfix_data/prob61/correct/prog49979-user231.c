#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int i;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int count[k+1];
    int j;
    for(i=0;i<=k;i++){
        for(j=0;j<n;j++){
            if(i==a[j])
            count[i]++; } }
    for(i=0;i<=k;i++){
        printf("%d ",count[i]); }
    int total=0,old_c;
    for(i=0;i<=k;i++){
        old_c=count[i];
        count[i]=total;
        total=total+old_c; }
    return 0; }