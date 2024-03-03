#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,j,k,n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    printf("%d %d %d %d",n,m,x,y);
    int man[n],vest[m];
    for(i=0;i<n;i++) {
        scanf("%d",&man[i]);
        printf("%d ",man[i]); }
    printf("\n");
     for(j=0;j<m;j++) {
        scanf("%d",&vest[j]);
        printf("%d",vest[i]); }
	return 0; }