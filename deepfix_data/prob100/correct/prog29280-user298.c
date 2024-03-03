#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int col[n][m];
    int count[n],temp=0,val=0;
    for (i=1;i<=n;i++) {
        for (j=1;j<=m;j++) {
            scanf("%d ",&col[i][j]); }
        printf("\n"); }
    for (i=1;i<=n;i++) {
        for (j=1;j<=m;j++) {
            if( col[i][j] < col[i][j+1] ) {
                count[i]=col[i][j+1]; } } }
    for (i=1;i<=n;i++) {
        temp=count[i];
        for (j=i;j<=n;j++) {
            if (temp<count[j]) {
                val=temp; } } }
    printf("%d",val);
    return 0; }