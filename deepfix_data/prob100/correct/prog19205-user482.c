#include<stdio.h>
#include<limits.h>
int main() {
    int m=0;
    int n=0;
    scanf("%d%d",&n,&m);
    int a[m][n];
    int i=0;
    int j=0;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&a[i][j]); } }
    int max[m];
    int k=0;
    for(k=0;k<m;k++) {
        int max_value=0;
        int x=0;
        for(x=0;x<n;x++) {
            if(a[k][x]>max_value) {
                max_value=a[k][x]; } }
        max[k]=max_value; }
    int ans=max[0];
    int l=0;
    for(l=0;l<m;l++) {
        if(max[l]<ans) {
            ans=max[l]; } }
    printf("%d",ans);
    return 0; }