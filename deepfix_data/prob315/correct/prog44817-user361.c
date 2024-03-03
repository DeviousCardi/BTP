#include <stdio.h>
#include <stdlib.h>
int main() {
     int A[1000],n,i,j,k=0;
     scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%d",&A[i]); }
     for(i=0;i<n;i++){
         for(j=0;(j>i)&&(j<n);j++)
         if(A[i]>A[j]){
             k++; } }
     printf("%d",k);
	return 0; }