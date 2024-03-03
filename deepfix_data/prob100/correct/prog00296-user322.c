#include<stdio.h>
#include<limits.h>
int main() {
    int n,m;
    scanf("%d %d\n",&n,&m);
    int i,j,a[m+1][n+1],max,b[m+1],min;
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            scanf("%d",&a[i][j]); }
        max=a[i][1];
        for(j=2;j<=n;j++){
            if(a[i][j]>max){
                max=a[i][j]; } }
        b[i]=max; }
    min=b[1];
    for(i=2;i<=m;i++){
        if(b[i]<min){
            min=b[i]; } }
    printf ("%d",min);
    return 0; }