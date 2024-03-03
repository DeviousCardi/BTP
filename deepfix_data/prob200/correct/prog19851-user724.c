#include <stdio.h>
int arr[100]={0};
int n;
int  getMaxLessThan(int upperLimit) {
    int i,j,p=0;
    for(i=0;i<n;i++) {
        if(arr[i]==upperLimit)
        arr[i]=0; }
    for(j=0;j<n;j++) {
        if(arr[j]>p) {
            p=arr[j]; } }
return p; }
int main()
{   int j,n,k,i;
    scanf("%d %d\n",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d ",&arr[i]); }
    int max=0;
    for(j=0;j<n;j++) {
        if(arr[j]>max) {
            max=arr[j]; } }
    for(i=0;i<k;i++) {
        getMaxLessThan(max);
        printf("%d\n",k); } }