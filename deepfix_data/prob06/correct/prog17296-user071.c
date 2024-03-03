#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j,*A,*V,count=0;
     scanf("%d%d%d%d\n",&n,&m,&x,&y);
     A=(int*)malloc(n*sizeof(int));
     V=(int*)malloc(m*sizeof(int));
     for(i=0;i<n;i++){
         scanf("%d",&A[i]); }
     scanf("\n");
     for(j=0;j<m;j++){
         scanf("%d",&V[j]); }
        for(i=0;i<n;i++){
            count=0;
            for(j=0;j<m;j++){
            if(A[i]-x<=V[j]&&V[j]<=A[i]+y){
                count++;
                break; } } }
        printf("%d\n",count);
	return 0; }