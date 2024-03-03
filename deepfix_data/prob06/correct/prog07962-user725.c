#include <stdio.h>
#include <stdlib.h>
int k=0;
int i,j;
int count=0;
int x,y,n,m;
void command_vests(int *a,int *b,int **newArr){
    for(i=0;i<n;i++){
        for(j=k;j<m;j++){
            if(  ( (*(a+i)-x)<=*(b+j) ) && (*(b+j)<=(*(a+i)+y))   ){
                printf("%d ", i+1);
                printf("%d\n", j+1);
                k++;
                count++;
                break; } } } }
int main() {
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *a,*b;
	a=(int *)malloc(n*sizeof(int));
	b=(int *)malloc(m*sizeof(int));
	int **newArr;
	newArr=(int**)malloc(n*sizeof(int*));
	*newArr=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",(a+i)); }
	for(i=0;i<m;i++){
	    scanf("%d",(b+i)); }
	command_vests(a,b,*newArr);
	printf("%d\n",count);
	return 0; }