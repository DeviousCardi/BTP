#include <stdio.h>
int main(){
    int n,k,i,j,oldcount,total=0,x;
    int output[n];
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for (i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int count[k];
    for (i=0;i<=k;i++){
        count[i]=0; }
    for (i=0;i<=k;i++){
        for (j=0;j<n;j++){
            if (a[j]==i){
                count[i]++; } } }
    for (i=0;i<=k;i++){
        oldcount=count[i];
        count[i]=total;
        total=total+oldcount; }
    for (i=0;i<n;i++){
        x=a[i];
        output[count[x]]=x;
        count[x]=count[x]+1; }
    for (i=0;i<n;i++){
        printf("%d ",output[i]); } }