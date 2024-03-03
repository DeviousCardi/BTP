#include <stdio.h>
#include <stdlib.h>
int main() {
    int mat[2][2];
    read_mat(mat);
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d",mat[1][1]); } }
    return 0; }
void read_mat(int matrix[2][2]) {
    int i,j;
    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            scanf("%d",&matrix[i][j]); } } }