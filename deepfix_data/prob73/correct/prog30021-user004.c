#include <stdio.h>
int main() {
    int n,m;
    int i=0;
    int j=0;
    scanf("%d%d",&n,&m);
    int array[n][m];
    for(j=0;j<=m;j++){
        scanf("%d",&array[i][j]);
        while(j==m){
            i++;
            scanf("\n");
            if(i>n){
                break; }
            else{
                j=0; } } }
    printf("");
    return 0; }