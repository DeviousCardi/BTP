#include<stdio.h>
void lasub(int,int[]);
int main() {
    int size;
    scanf("%d",&size);
    int i,a[size];
    for(i=0;i<size;i++) {
        scanf("%d ",&a[i]); }
    lasub(size,a);
    return 0; }
void lasub(int n,int arr[n]) {
    int count=1;
    int i,maxtill[n];
    for(i=1;i<n;i++) {
        if(arr[i]<arr[0])
        arr[i]=0; }
    for(i=0;i<n;i++) {
        if(arr[i]!=0)
        count++; }
    printf("%d",count); }