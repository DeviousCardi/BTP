#include <stdio.h>
int main() {
    int n,k,count;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int tarr[k+1];
    for(int i=0;i<(k+1);i++)
    tarr[i]=0;
    for(int i=0;i<(k+1);i++) {
        for(int j=0;j<n;j++) {
            if(arr[j]==i);
            tarr[i]=tarr[i]+1; } }
    int out[n];
    int i=0,temp;
    for(int j=0;j<(k+1);j++) {
       temp=i;
       for(int cnt=0;cnt<tarr[j];cnt++) {
           out[temp+cnt]=j; }
       i+=(cnt+1); } }