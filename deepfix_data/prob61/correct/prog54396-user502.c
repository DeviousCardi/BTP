#include <stdio.h>
int main(){
    int n,k,a[n],b[k],c=0,d[n],p=0,q;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]); }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]==i){
                c=c+1; }
        }b[i]=c; }
    for(int i=0;i<k+1;i++){
        q=b[i];
        for(int j=p;j<q;j++){
            d[j]=i;
        }p=p+n; }
    for(int i=0;i<n;i++){
        printf("%d ",d[i]); }
    return 0; }