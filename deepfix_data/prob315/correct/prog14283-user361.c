#include <stdio.h>
#include <stdlib.h>
int main() {
     int A[1000],n,t=0,i,j;
     int k=0;
     scanf("%d",&n);
     for(i=0;i<n;i++){
         scanf("%d",&A[i]); }
     for(i=0;i<n;i++){
         for(j=i+1;j<n;j++)
         if(A[i]>A[j]){
             k++; } }
    printf("%d\n",k);
    for(i=0,j=1;i<n;i++){
        for(j=i+1;j<n;j++){
        if(A[i]>A[j]){
            t++;
        printf("%d",t); } } }
	return 0; }