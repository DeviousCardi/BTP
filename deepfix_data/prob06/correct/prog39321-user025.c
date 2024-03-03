#include <stdio.h>
#include <stdlib.h>
 int n,m,x,y,k=0;
 int *a,*b,count=0;
 int **mat;
 int ** check(int p){
     if(p>=(b[k]-x)&&p<=(b[k]+y)){
         count+=1;
         k+=1;
         mat[count-1][0]=b[k];
         mat[count-1][1]=p;
     }else if(p>=(b[k]+y)){
         k+=1;
         check(p); }
     return mat; }
int main() {
    int i;
  mat=(int **)(malloc(m*sizeof(int*)));
  for(i=0;i<m;i++){
      mat[i]=(int *)(malloc(2*sizeof(int))); }
 scanf("%d %d %d %d",&n,&m,&x,&y);
 a=(int *)(malloc(n*sizeof(int)));
 b=(int *)(malloc(m*sizeof(int)));
 for(i=0;i<n;i++){
     scanf("%d",&a[i]); }
 for(i=0;i<m;i++){
     scanf("%d",&b[i]); }
 printf("%d",x);
	return 0; }