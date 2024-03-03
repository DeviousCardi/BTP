#include <stdio.h>
int main() {
    int n,m,sum,b,c,d;
    int i=0;
    int j=1;
    scanf("%d%d",&n,&m);
    int array[n][m];
    for(j=1;j<=m;j++){
        scanf("%d",&array[i][j]);
        while(j==m){
            i++;
            if(i>n){
                break; }
            else{
                j=1; }
            scanf("\n"); } }
    printf("%d",array[1][1]);
    sum=0;
    d=0;
    b=1;
    c=1;
    while(b<=n){
        while(c<=m){
            d=d+array[b][c];
            c++; }
        b++;
        c=1;
        if(sum<d){
            sum=d; }
        d=0; }
    printf("%d",sum);
    return 0; }