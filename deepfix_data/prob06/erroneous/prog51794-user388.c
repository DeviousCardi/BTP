#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    int *a=(int*)malloc(n*sizeof(int));
	int *b=(int*)malloc(m*sizeof(int));
	int i,j=0;
	for(i=0;i<n;i++) {
	    scanf("%d ",a+i); }
	for(j=0;j<m;j++) {
	    scanf("%d",b+j); }
	for(i=0;i<n;i++) {
	    printf("%d",i\n);
	    while(j<m) {
	        if(*(a+i)-x<=*(b+j)&&*(a+i)+y>=*(b+j)) {
	            printf("%d",j);
	            printf("%d %d\n",i,j);
	            j++;
	            break; }
	        j++; } }
	return 0; }