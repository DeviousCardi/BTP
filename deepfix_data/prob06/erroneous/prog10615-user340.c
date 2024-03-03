#include <stdio.h>
#include <stdlib.h>
int main() {
	int *s,*a,n,m,x,y;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	s=(int*)malloc(sizeof(int)*n);
	a=(int*)malloc(sizeof(int)*m);
	for(i=0;i<n;i++){
	    scanf("%d",s+i); }
	for(i=0;i<m;i++){
	    scanf("%d",a+i); }
	for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	if( *(a+j) >= *(s+i)-x && *(a+j) <= *(s+i)+y ){
	        printf("%d %d\n",*(s+i),*(a+j));
	        count++; } } }
	return 0; }