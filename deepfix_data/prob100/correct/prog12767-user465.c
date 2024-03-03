#include<stdio.h>
#include<limits.h>
int main() {
    int m,n,a[100][100],big[100],ans;
    scanf("%d %d",&n,&m);
    for(int r=0;r<m;r++) {
        big[r]=a[r][1];
        for(int c=0;c<n;c++) {
            scanf("%d",&a[r][c]);
            if(big[r]<a[r][c])
            big[r]=a[r][c]; } }
    ans=big[0];
    for(int i=0;i<m;i++) {
        if(big[i]>ans)
        ans=big[i]; }
    printf("%d",ans);
    return 0; }