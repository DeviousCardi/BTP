#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int input[n],count[k-1];
    for(int i=0;i<n;i++)
        scanf("%d",&input[i]);
    for(int i=0;i<k-1;i++)
        count[i]=0;
    for(int i=1;i<k;i++) {
        for(int j=0;j<n;j++) {
            if(input[j]==i)
            count[i-1]++; } }
    int startindex[k-1],oldcount=-1;
    for(int i=0;i<k-1;i++) {
        startindex[i]=count[i]+oldcount;
        oldcount=startindex[i]; }
    int output[n],l=0;
    for(int i=0;i<k-1;i++) {
        for(;l<=startindex[i];) {
            output[l]=i+1;
            l++; } }
    for(int i=0;i<n;i++)
        printf("%d ",count[i]); }