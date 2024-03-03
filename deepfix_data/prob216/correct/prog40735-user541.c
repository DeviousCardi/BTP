#include <stdio.h>
#include <stdlib.h>
int fib(int n){
       if (n==1)
        return 0;
        else if (n==2)
        return 1;
    else if (n>=3)
        return fib(n-1)+fib(n-2); }
void scan_matrix(int matrix[10][10] , int rows, int columns) {
    int i,j;
    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            scanf ("%d",&matrix[i][j]);
            printf ("%d",matrix[i][j]); } } }
int main() {
	int matr[10][10],n,a;
	scanf ("%d",&n);
	scan_matrix(matr,n,1);
	for (a=0;a<n;a++){
	    printf ("%d\n",fib(matr[a][0])); }
	return 0; }