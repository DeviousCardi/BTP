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
        printf("%d ",count[i]);
        total+=oldcount; }
    int output[n];
    printf("\n");
    for(i=2;i<n;i++) {
        output[count[a[i]-1]]=a[i];
        a[i]+=1;
        printf("%d ",count[a[i]] ); }
    return 0; }