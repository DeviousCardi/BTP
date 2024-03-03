#include <stdio.h>
#include <stdlib.h>
int find (int *a,int *b,int n,int m,int x,int y) {
    int i,j,count=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            if(*(a+i)-x <= *(b+j) <= *(a+i)+y)
            count++; } }
    return count; }
int main() {
    int *a,*b;
	int n,m,x,y,i;
	scanf("%d %d %d %d\n",&n,&m,&x,&y);
	a=(int *)malloc(n*sizeof(int));
    b=(int *)malloc(m*sizeof(int));
    for(i=0;i<n;i++) {
        scanf("%d ",*(a+i)); }
    for(i=0;i<m;i++) {
        scanf("%d ",*(b+i)); }
    find(a,b,n,m,x,y);
    printf("%d\n",count)
	return 0; }