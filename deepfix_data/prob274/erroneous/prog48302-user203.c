#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int i,index;
    int a[n],b[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]==1) }
    for(int j=0;j<n;j++) {
        b[0]=a[0];
        b[j]=a[b[j]-1]; }
    int z,count=0;
    for(j=0;j<n;j++) {
        z=count;
        count=0;
        for(int k=0;k<n;k++) {
            if(a[j]==a[k]) {
                count=count+1; } }
        if(count<=z) {
            z=count; } }
    printf("%d  %d",z,(z-1));
    return 0; }