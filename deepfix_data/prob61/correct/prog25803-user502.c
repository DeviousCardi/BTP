#include <stdio.h>
int main(){
    int n,k,c=0,p=0,q;
    scanf("%d %d",&n,&k);
    int a[n],b[k+1],d[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    for(int i=0;i<=k;i++){
        b[i]=0; }
    for(int i=0;i<n;i++){
        b[a[i]]++; }
    for(int i=0;i<k+1;i++){
        q=b[i];
        for(int j=p;j<q+p;j++){
            d[j]=i;
        }p=p+q; }
    for(int i=0;i<n;i++){
        printf("%d ",d[i]); }
    return 0; }