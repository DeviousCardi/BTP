#include <stdio.h>
int main() {
    int n,k,i;
    scanf("%d",&n);
    scanf("%d",&k);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int count[k];
    for(i=0;i<k;i++)
    count[i]=0;
    for(i=0;i<k;i++) {
        count[arr[i]-1]++; }
    int total=0,oldcount;
    for(i=0;i<k;i++) {
        oldcount=count[i];
        count[i]=total;
        total+=oldcount; }
    for(i=0;i<k;i++) {
        printf("%d ",count[arr[i]-1]); }
    int output[n];
    for(i=0;i<n;i++) {
        output[count[arr[i]-1]]=arr[i];
        count[arr[i]-1]++; } }