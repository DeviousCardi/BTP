#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y,i,j,k,done=0;
    int *req,*sizes;
    int **result;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    req=malloc(n*(sizeof(int)));
    sizes=malloc(m*sizeof(int));
    result=(int**)malloc(n*sizeof(int*));
    for(i=0;i<n;i++)
        scanf("%d",(req+i));
    for(i=0;i<m;i++)
        scanf("%d",(sizes+i));
    for(i=0;i<n;i++) {
        for(j=k+1;j<m;j++) {
            if(*(size+j)=<*(req+i)+y) {
                if(*(size+j)>=*(req+i)-x) {
                    result[done]=(int*)malloc(2*sizeof(int));
                    result[done][0]=i;
                    result[done][1]=j;
                    done++;
                    k=j;
                    break; } } }
    for(i=0;i<m;i++){
        for(j=0;j<2;j++)
            printf("%d ",result[i][j]);
        printf("\n"); }
	return 0; }