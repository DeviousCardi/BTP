#include<stdio.h>
int max(int a) { }
int main() {
    int n;
    int a[20];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int maxtill[20];
    maxtill[0]=1;
    for(int i=1;i<n;i++) {
        maxtill[i]=max(1+maxtill[j]);
        for(int j=0;j<i;j++) {
            if(a[j]<a[i]) {
                maxtill[]
                maxtill[i]=max(1+maxtill[j]); } } }
    int max=maxtill[0];
    for(int j=1;j<n;j++) {
        if(maxtill[j]>maxtill[i]) {
            max=maxtill[j]; } }
    printf("%d",max);
    return 0; }