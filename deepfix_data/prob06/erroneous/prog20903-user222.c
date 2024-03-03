#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j,*a,*b,num=0,ar[50][3];
	scanf("%d%d%d%d",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<m;i++) {
	    scanf("%d",(b+i)); }
	i=0;j=0;
	while(j<m) {
	   if(*(b+j)>=(*(a+i)-x)||*(b+j)<=(*(a+i)+y)) {
	       ar[num][0]=i+1;
	       ar[num][1]=j+1;
	       i++;j++;num++; }
	   else {
	       i++; } }
	printf("%d\n",num);
	for(i=0;i<num;i++) {
	    for(j=0;j<2;j++) {
	     printf("%d ",ar[i][j]);
	    }printf("\n");
	return 0; }