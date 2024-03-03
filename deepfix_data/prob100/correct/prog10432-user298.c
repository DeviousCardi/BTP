#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int col[1000][1000];
    int count[n],temp=0,val=0,var=0;
    for (i=1;i<=n;i++) {
        for (j=1;j<=m;j++) {
            scanf("%d ",&col[i][j]); } }
    for (i=1;i<=n;i++) {
        for (j=1;j<=m;j++) {
            var=col[i][j];
            for (j=1;j<=m;j++) {
                if( col[i][j] > var ) {
                    count[i]=col[i][j]; } } } }
    for (i=1;i<=n;i++) {
        for (j=i;j<=n;j++) {
            if (count[i]<count[j]) {
                val=count[i]; } } }
    printf("%d",val);
    return 0; }