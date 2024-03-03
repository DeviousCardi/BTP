#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,k=0,count=0;
	scanf("%d%d%d%d",&n,&m,&x,&y);
    int *A,*B,*C;
    A=(int*)malloc(sizeof(int)*n);
    B=(int*)malloc(sizeof(int)*m);
    C=(int*)malloc(sizeof(int)*m);
    for(i=0;i<n;++i) {
        scanf("%d ",&A[i]); }
    for(j=0;j<m;++j) {
        scanf("%d ",&B[j]); }
    for(i=0;i<n;++i) {
          for(j=count;j<m;++j) {
             if(((A[i]-x)<=B[j])&&(B[j]<=(A[i]+y))) {
                 C[count]=i+1 j+1;
                 count++;
                 k++; }
               break; } }
    printf("%d\n",k);
    for(i=0;i<k;++i) {
         printf("%d",C[i]);
         printf("\n"); }
	return 0; }