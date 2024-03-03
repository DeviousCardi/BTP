#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit) {
    int mindiff,i,diff[n],count;
    for(i=0;i<n;i++){
        diff[i]=upperLimit-arr[i]; }
    mindiff=diff[0];
    for(i=1;i<n;i++){
        if(mindiff>diff[i]) {
            mindiff=diff[i];
            count=i; } }
    arr[count]=0;
    for(i=0;i<n;i++){
        diff[i]=upperLimit-arr[i]; }
    mindiff=diff[0];
    for(i=1;i<n;i++){
        if(mindiff>diff[i]) {
            mindiff=diff[i];
            count=i; } }
    printf("%d",arr[count]);
    return arr[count]; }
int main() {
    int k,i=0;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); }
    return 0; }