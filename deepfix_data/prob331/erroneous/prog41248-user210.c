#include <stdio.h>
int main(){
    int n,temp=0;
    scanf("%d",&n);
    int matrix[n][n];
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d",&matrix[i][j]); }
        scanf("\n"); }
 for(i=0;i<n;i++) {
     for(j=0;j<n;j++) {
         if(i==j) {
             if(matrix[i][j]!=1) {
                 temp=1;
               break; } }
         if(i!=j) {
             if(matrix[i][j]!=0) {
                 temp=1;
                 break; } } } }
 if(temp==0) {
     printf("IDENTITY MATRIX"); }
 elseif(temp==1) {
     printf("NOT an IDENTITY MATRIX"); }
    return 0; }