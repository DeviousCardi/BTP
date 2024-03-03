#include<stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int i;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int count[k+1];
    for(i=0;i<=k;i++){
        count[i]=0; }
    int j;
    for(i=0;i<=k;i++){
        for(j=0;j<n;j++){
            if(i==a[j]){
                count[i]=count[i]+1; } } }
    int total=0,old_c;
    for(i=0;i<=k;i++){
        old_c=count[i];
        count[i]=total;
        total=total+old_c; }
    int output[n];
    for(i=0;i<=k;i++){
        for(j=count[i];j<n;j++){
            output[j]=i; } }
    for(i=0;i<n;i++){
        printf("%d ",output[i]); }
    return 0; }