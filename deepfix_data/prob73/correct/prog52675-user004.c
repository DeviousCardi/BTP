#include <stdio.h>
int main() {
    int n,m,sum;
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
    printf("%d",array[1][2]);
    return 0; }