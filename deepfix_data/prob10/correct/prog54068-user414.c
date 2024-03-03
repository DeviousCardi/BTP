#include<stdio.h>
int max(int,int);
int main() {
    int n,i,j,m,k=1,a,b,maximum;
    scanf("%d",&n);
    int arr[n],maxtill[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    for(i=0;i<n;i++) {
        for(j=i-1;j>=0;j--) {
            if(arr[j]<arr[i]) {
                m=1+maxtill[j]; }
            else {
                maxtill[j]=1; } }
        maxtill[i]=max(m,1); }
    for(i=0;i<n-1;i++) {
        a=maxtill[i];
        b=maxtill[i+1];
        maximum=max(a,b);
        if(max>k) {
            k=max; } }
    printf("%d",k);
    return 0; }
int max(int a,int b) {
    if(a>b) {
        return a; }
    else {
        return b; } }