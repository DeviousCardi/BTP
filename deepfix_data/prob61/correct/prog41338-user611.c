#include<stdio.h>
int main() {
    int n,k;
    scanf("%d%d",&n,&k);
    int input[n];
    for(int i=0;i<n;i++)
    scanf("%d",&input[i]);
    int count[k+1];
    for(int i=0;i<k+1;i++)
    count[i]=0;
    int output[n];
    for(int i=0;i<k+1;i++) {
        int d=0;
        for(int j=0;j<n;j++) {
            if(i==input[j])
            d++; }
        count[i]=d; }
    int total=0;
    int oldCount;
    for(int i=0;i<k+1;i++) {
         oldCount = count[i];
         count[i] = total;
         total += oldCount; }
    for(int i=0;i<n;i++) {
        int x=input[i];
         output[count[x]] = x;
         count[x] += 1; }
    for(int i=0;i<n;i++)
    printf("%d ",output[i]); }