#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,g=0,t,i,j,p=0,c=0;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	int *a,*b;
	int r[m],s[m];
	for(t=0;t<n;t++) {
	a=(int*)malloc(n*sizeof(int));
	scanf("%d",(a+t)); }
	for(t=0;t<m;t++) {
	b=(int*)malloc(m*sizeof(int));
	scanf("%d",(b+t)); }
	for(i=0;i<n;i++) {
	    if((*(a+i)-x<=*(b+j))&&(*(b+j)<=*(a+i)+y)&&j<m) { {
	            r[j]i+1;
	            s[j]=j+1;
	            j++; }
	        printf("%d",j);
	        for(i=0;i<j;i++) {
	            printf("%d %d", r[i],s[j]);
	            if(i!=j-1) printf("\n"); } } }
	return 0;
	free(a);
	free(b);
	free(save); }