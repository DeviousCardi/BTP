#include<stdio.h>
int main() {
    int n,m;
    m=0;
    int i=1;
    int arr[n];
    int maxtill[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    maxtill[0]=1;
    while(i<n) {
        int max=arr[0];
        if(arr[i]>max) {
            max=arr[i];
            maxtill[i]=(1+maxtill[i-1]); }
        else {
            maxtill[i]=maxtill[i-1]; }
        i++; }
    for(int i=1;i<n;i++) {
        m=maxtill[0];
        if(maxtill[i]>m) {
            m=maxtill[i]; } }
    printf("%d",m);
    return 0; }