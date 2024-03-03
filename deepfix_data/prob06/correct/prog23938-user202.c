#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m;
	long int x,y;
	scanf("%d %d %ld %ld\n",&n,&m,&x,&y);
	int i,j,sol[10000],vest[10000];
	for(i=0;i<n;i++)  scanf("%d ",&sol[i]);
	for(i=0;i<m;i++)  scanf("%d ",&vest[i]);
	int count=0,uv[10000][2];
	for(i=0;i<n;i++){
	    for(j=0;j<m;j++){
	        if(vest[j]==-1)  continue;
	        if((sol[i]-x<=vest[j])  &&  (vest[j]<=sol[i]+y)){
	            vest[j]=-100;
	            uv[count][0]=i+1;   uv[count][1]=j+1;
	            count++;
	            break; } } }
	printf("%d\n",count);
	for(i=0;i<count;i++)  printf("%d %d\n",uv[i][0],uv[i][1]);
	return 0; }