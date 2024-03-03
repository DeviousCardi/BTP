#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,n,m,x,y,c=0;
    int *a,*b;
	scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&x);
	scanf("%d",&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++) {
	    scanf("%d",(a+i)); }
	for(i=0;i<m;i++) {
	    scanf("%d",(b+i)); }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
        if(*(b+j)!=0) {
        if((*(b+j)>=(*(a+i)-x))&&(*(b+j)<=(*(a+i)+y))) {
            *(b+j)==0
            c++;
            break; } } } }
    printf("%d",c);
	return 0; }