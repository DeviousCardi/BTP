#include<stdio.h>
#include<limits.h>
int main() {
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int col[1000][1000];
    int count[n],temp=0,val=0,var=0;
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            scanf("%d ",&col[i][j]); } }
    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            var=col[i][0];
            for (j=0;j<m;j++) {
                if( col[i][j]>var ) {
                    var=col[i][j]; } }
            count[i]=var; } }
    for (i=0;i<n;i++) {
        var=count[i];
        for (j=i;j<m;j++) {
            if (var<count[j]) {
                var=count[j]; } } }
    printf("%d",var);
    return 0; }