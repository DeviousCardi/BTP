#include<stdio.h>
int a[20];
int max(int m) {
    int i,j=a[0],k=0;
    for(i=0;i<m;i++) {
        if(a[i]>j) {
            j=a[i];
            k++; } }
    return k; }
int main() {
    int n,maxtill[20],i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    max(i);
    for(i=0;i<n;i++) {
        if(maxtill[i]>j)
        j=maxtill[i]; }
    printf("%d",j);
    return 0; }