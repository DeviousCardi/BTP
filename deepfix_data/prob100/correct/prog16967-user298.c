#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j,k;
    scanf("%d %d",&n,&m);
    int col[1000][1000];
    int count[1000],temp=0,val=0,var=0;
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d ",&col[i][j]); } }
    for (i=0;i<m;i++) {
            var=col[i][0];
            for (k=0;k<n;k++) {
                if( col[i][k]>var ) {
                    var=col[i][k]; } }
            count[i]=var;
        printf("%d ",count[i]); }
        var=count[0];
        for (j=0;j<m;j++) {
            if (var>count[j]) {
                var=count[j]; } }
    printf("%d",var);
    return 0; }