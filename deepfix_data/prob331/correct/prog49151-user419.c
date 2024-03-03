#include <stdio.h>
int main(){
        int i,j,n;
        scanf("%d",&n);
        int mat[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                scanf("%d",&mat[i][j]);
              if(mat[i][j]==1 && mat[j][i]==0){
                printf("\nGIVEN n*n matrix is an IDENTITY MATRIX"); }
              else{
                printf("\nGIVEN n*n matrix is NOT an IDENTITY MATRIX"); } } }
    return 0; }