#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	int*a = (int*) malloc(n*sizeof(int));
	int i;
	for(i=0;i<n;i++) {
	    scanf("%d ",(a+i)); }
	scanf("\n");
	int* b = (int*) malloc(m*sizeof(int));
	for(i=0;i<m;i++) {
	    scanf("%d",(b+i)); }
	int k =0;
	int** pairs = (int**)malloc(n*sizof(int*));
	for(i=0;i<n;i++) {
	    *(pair+i) = (int*)malloc(2*sizeof(int)); }
	for(i=0;i<n;i++) {
	    for(j=0;j<m;j++) {
	        if((*(b+j)>=(*(a+i)-x)) &&(*(b+j)<=(*(a+i)+y))) {
	           *(*(pair+k)+0) = *(a+i);
	           *(*(pair+k)+1) = *(b+j);
	           k++; } } }
	printf("%d",k);
	return 0; }