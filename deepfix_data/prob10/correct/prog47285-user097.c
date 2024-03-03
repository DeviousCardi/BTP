#include<stdio.h>
int main() {
    int n,m;
    m=1;
    scanf("%d",&n);
    int i=1;
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int max;
    for(i=0;i<n-1;i++) {
        int maxtill[n];
        maxtill[i]=1;
        for(int j=1;j<n;j++) {
            maxtill[j]=0; }
        int k=i;
    while(k<n)
    {   max=arr[k];
        if(arr[k+1]>max) {
            max=arr[k+1];
            maxtill[k+1]=(1+maxtill[k]); }
        else {
            maxtill[k+1]=maxtill[k]; }
        k++; }
    for(int i=1;i<n;i++) {
        if(maxtill[i]>m) {
            m=maxtill[i]; } } }
    printf("%d",m);
    return 0; }