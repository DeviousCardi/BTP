#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int input[n],count[k];
    for(int i=0;i<n;i++)
        scanf("%d",&input[i]);
    for(int i=0;i<k;i++)
        count[i]=0;
    for(int i=0;i<k;i++) {
        for(int j=0;j<n;j++) {
            if(input[j]==i+1)
            count[i]++; } }
    int output[n],l=0;
    for(int i=0;i<k;i++) {
        for(int t=0;t<count[i];t++) {
            output[l]=i+1;
            l++; } }
    for(int i=0;i<n;i++)
        printf("%d ",output[i]); }