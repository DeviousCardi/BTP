#include<stdio.h>
void sort(int array[], int k, int n,int output[]) {
    int i,j,count[k];
    for(i=0;i<k;i++) {
        count[i]=0;
        for(j=0;j<n;j++) {
            if(array[j]==i) count[i]++; } }
    for(i=0;i<k;i++) { }
    int total=0, oldCount;
    for(i=0;i<k;i++) {
    oldCount=count[i];
      count[i]=total; printf("%d=%d ",i,count[i]);
      total=total+oldCount; }
    printf("\n");
    for(i=0,j=0;i<k;i++) {
        if(count[i]==0) continue;
        while(count[i]<count[i+1]) {
            output[j]=i;j++;
            printf("%d ",output[j]); } } }
int main() {
    int n, k,i;
    scanf("%d%d",&n,&k);
    int a[n],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sort(a,k,n,output); }