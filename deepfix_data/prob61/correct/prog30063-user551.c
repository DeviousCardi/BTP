#include <stdio.h>
int main() {
    int n,k,i,oldCount,x;
    scanf("%d %d",&n,&k);
    int input[n],output[n];
    for(i=0;i<n;i++) {
        scanf("%d",&input[i]); }
    int count[k];
    for(i=0;i<k;i++) {
        count[i] = 0; }
    for(i=0;i<n;i++) {
        count[input[i]-1]++; }
    int total = 0;
    for(i=0;i<k;i++) {
        oldCount = count[i];
        count[i] = total;
        total = total + oldCount; }
    for(i=0;i<n;i++) {
        int x = input[i];
        output[count[x]]=x;
        count[x]++; }
    for(i=0;i<n;i++) {
        printf("%d ",output[i]); } }