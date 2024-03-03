#include<stdio.h>
void sort(int array[], int k, int n, output[]) {
    int i,j,count[k];
    for(i=0;i<k;i++) {
        count[i]=0;
        for(j=0;j<n;j++) {
            if(array[j]==i) count[i]++; } }
    int total=0, oldCount;
    for(i=0;i<k;i++) {
    oldCount=count[i]; printf(" i=%d ",i,count[i]);
      count[i]=total;
      total=total+oldCount; } }
int main() {
    scanf("%d%d",&n,&k);
    int a[n],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sort(a,k,n,output); }