#include<stdio.h>
int main() {
    int n,m;
    m=0;
    scanf("%d",&n);
    int i=1;
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    int max;
    for(i=0;i<n-1;i++) {
        int maxtill[n];
        maxtill[0]=1;
        for(int j=1;j<n;j++) {
            maxtill[i]=0; }
    while(i<n)
    {   max=arr[i];
        if(arr[i+1]>max) {
            max=arr[i+1];
            maxtill[i+1]=(1+maxtill[i]); }
        else {
            maxtill[i+1]=maxtill[i]; }
        i++; }
    for(int i=1;i<n;i++) {
        m=maxtill[0];
        if(maxtill[i]>m) {
            m=maxtill[i]; } } }
    printf("%d",m);
    return 0; }