#include <stdio.h>
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    int count[k],a[n],b[n];
    for(int i=0;i<k;i++){
        count[i]=0; }
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<=k;i++){
        for(int j=0;j<n;j++){
           if(i==a[j]){
               count[i]++; } } }
    int tot=0,oldcount;
    for(int i=0;i<=k;i++){
        oldcount=count[i];
        count[i]=tot;
        tot+=oldcount; }
    for(int i=0;i<n;i++){
        int x=a[i];
        b[count[x]]=x;
        count[x]+=1; }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]); } }