#include <stdio.h>
#include <stdlib.h>
int cat(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    else return ((4*n-2)/n+1)*cat(n-1); }
void comp(int k, int matrix[50]){
    int i;
    for(i=0;i<50;i++){
        if(matrix[i]<k && matrix[i+1]>k){
            printf("%d\n",matrix[i]); } } }
int main() {
	int mat[50],i,t,k;
    for(i=0;i<=30;i++){
      mat[i]=cat(i); }
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d\n",&k);
        comp(k,mat); }
	return 0; }