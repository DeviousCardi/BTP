#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    int max[m];
    int i,j,k;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
        scanf("%d",&mat[j][i]);
        printf("%d\n",mat[j][i]); } }
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++) {
            for(k=0;k<n;k++) {
                if(mat[j][i]<mat[k][i])
                break; }
            if(k==n)
            max[i]=mat[j][i]; } }
    for(i=0;i<m;i++) {
        for(j=0;j<m;j++) {
            if(max[i]>max[j])
            break; }
        if(j==m) {
            printf("%d",max[i]);
            return 0; } }
    return 0; }