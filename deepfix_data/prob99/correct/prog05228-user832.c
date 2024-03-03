#include<stdio.h>
int max(int a[],int n);
int main() {
    int n;
    scanf("%d",&n);
    int a[n],MaxTill[n];
    for(int i=0;i<n;i++) {
        scanf("%d",a+i); }
    MaxTill[0]=1;
    for(int i=1;i<n;i++) {
        for(int j=i-1;j>=0;j++) {
            MaxTill[i]=max(MaxTill,j);
            MaxTill[i]++; } }
    printf("%d",max(MaxTill,n));
    return 0; }
int max(int a[],int n) {
    int max;
    max=a[0]; {
        for(int i=0;i<n;i++) {
            if(a[i]>max) {
                max=a[i]; } } } }