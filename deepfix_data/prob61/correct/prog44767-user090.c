#include<stdio.h>
int main() {
    int n,k,i,j,Nu=0,startindex;
     scanf("%d%d",&n,&k);
    int arr[n],count[k],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<k;i++) {
        count[i]=0; }
    for(i=0;i<=k;i++) {
        for(j=0;j<n;j++) {
            if(arr[j]==i)
          {Nu=Nu+1;} }
        startindex=Nu; }
    int total=0,oldcount;
    for(i=0;i<=k;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount; }
    for(i=0;i<n;i++) {
        output[count[i]]=i;
        count[i]=count[i]+1; }
    for(i=0;i<n;i++) {
        printf("%d",output[i]); }
    return 0; }