#include<stdio.h>
int main() {
    int n;
    int i,j;
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    maxtill[n];
    maxtill[0]=1;
    while(i<n) {
        int i=1;
        int max=arr[0];
        if(arr[i]>max) {
            max=arr[i];
            maxtill[i]=(1+maxtill[i-1]); }
        else {
            maxtill[i]=maxtill[i-1]; }
        i++; }
    for(int i=1;i<n;i++) {
        int m=maxtill[0];
        if(maxtill[i]>m) {
            m=maxtill[i]; } }
    printf("%d",m);
    return 0; }