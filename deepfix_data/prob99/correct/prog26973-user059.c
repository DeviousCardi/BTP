#include<stdio.h>
int a[20],maxtill[20];
int max(int m) {
    int i,j=a[0],k=0;
    for(i=0;i<=m;i++) {
        if(a[i]>j) {
            j=a[i];
            k++; } }
    printf("%d ",k);
    return k; }
int main() {
    int n,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    maxtill[i]=max(max(1+maxtill[i]));
    for(i=0;i<n;i++) {
        if(maxtill[i]>j)
        j=maxtill[i]; }
    printf("%d",j);
    return 0; }