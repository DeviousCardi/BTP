#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m ,x,y;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int a[n],b[m],i,j;
	for(i=0;i<n;i++) scanf("%d",a+i);
	for(i=0;i<m;i++) scanf("%d",b+i);
	int u[n],v[n],k=0;
	*u=-1;
	*v=-1;
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        if(((*(a+i)-x<=*(b+j))&&(*(a+i)+y>=*(b+j)))){
	            *(u+k)=i+1;
	            *(v+k)=j+1;
	            *(b+j)=-17649;
	            k++;
	            break; } } } }
	printf("%d\n",k);
	for(i=0;i<k;i++) printf("%d %d\n",*(u+i),*(v+i));
	return 0; }