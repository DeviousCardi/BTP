#include<stdio.h>
int main() {
    int n,i,j,cnt=0,max=0,max1=0;
    scanf("%d",&n);
    int mat[n];
    for(i=0;i<n;i++) {
        scanf("%d",&mat[i]); }
    int maxtill[n];
    maxtill[0]=1;
    for(i=1;i<n;i++) {
        maxtill[i]=1;
        for(j=0;j<i;j++) {
            if(mat[j]<mat[i]) {
                cnt=maxtill[j]+1; }
            if(max<cnt) {
                max=cnt;
                maxtill[i]=max; } }
        if(max1<max) {
            max1=max; } }
    printf("%d",max1);
    return 0; }