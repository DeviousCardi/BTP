#include <stdio.h>
int main(){
    int ar1[10][10],n,i,j,row,col,flag=1;
    scanf("%d",&n);
    printf("enter the elements of matrix\n");
    scanf("%d %d",&row, &col);
    printf("enter the elements of matrix\n");
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
            scanf("%d",&ar1[i][j]); } }
    printf("matrix n is \n");
    for(i=0;i<row;i++) {
    for(j=0;j<col;j++) {
        printf("%3d",ar1[i][j]); }
      printf("\n"); }
    for(i=0;i<row;i++) {
        for(j=0;j<col;j++) {
        if(ar1[i][j]!=1 && ar1[j][i]!=0)
          flag=0;
          break; }
        if(flag==1) {
            printf("GIVEN  is an IDENTITY MATRIX"); }
        else {
            printf("GIVEN  is NOT an IDENTITY MATRIX"); }
        return 0; } }