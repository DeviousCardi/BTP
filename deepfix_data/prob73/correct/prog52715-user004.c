#include <stdio.h>
int main() {
    int n,m,sum,b,c;
    int i=1;
    int j=1;
    scanf("%d%d",&n,&m);
    int array[n][m];
    for(j=1;j<=m;j++){
        scanf("%d",&array[i][j]);
        while(j==m){
            i++;
            scanf("\n");
            if(i>n){
                break; }
            else{
                j=1; } } }
    sum=0;
    b=1;
    c=1;
    while(b<=n){
        sum=sum+array[b][c];
        printf("%d",sum);
        c++;
        while(c==m){
            c=1;
            b++; } }
    return 0; }