#include<stdio.h>
int fill(int, int[], int[]);
int max(int, int);
int main() {
    int n,i,c;
    scanf("%d",&n);
    int arr[n],maxtill[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        maxtill[i]=0; }
    maxtill[0]=1;
    for(i=1;i<n;i++) {
        c=fill(i,maxtill,arr);
        maxtill[i]=max(maxtill[i-1],c+1); }
    printf("%d",maxtill[n-1]);
    return 0; }
int fill(int i,int maxtill[],int arr[]) {
    int j,ele=arr[i],count=0;
    for(j=i;j>=0;j--) {
        if(arr[j]<ele) {
            count++;
            ele=arr[j]; } }
    return count; }
int max(int a,int b) {
    return (a>b)?a:b; }