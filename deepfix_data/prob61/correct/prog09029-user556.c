#include<stdio.h>
int main() {
    int n,k;int i;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int count[k-1];
    for(i=0;i<k-1;i++)
    count[i]=0;
    for(i=0;i<n;i++) {
        count[a[i]-1]+=1; }
    int total=0,oldcount;
    for(i=0;i<k-1;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount; }
    int output[n];
    for(i=0;i<n;i++) output[i]=0;
    for(i=0;i<n;i++) {
        output[count[a[i]-1]]=a[i];
       count[a[i]-1]+=1; }
    for(i=0;i<n;i++)
   printf("%d ",output[i]);
    return 0; }