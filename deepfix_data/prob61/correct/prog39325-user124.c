#include <stdio.h>
int main(){
    int n,k,i,j;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int count[k];
    for (i=0;i<k;i++){
        count[i]=0; }
    for (i=0;i<=k;i++){
        for (j=0;j<n;j++){
            if (a[j]==i){
                count[i]++; } } }
    printf("%d",count[2]); }