#include <stdio.h>
#include <stdlib.h> }
int main() {
	int n,m,x,y,i,j;
	int*a,*b;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d ",a+i); }
    for(i=0;i<m;i++){
        scanf("%d ",b+i); }
    int count=0;
    for(i=0;i<m;i++){
        for(j=j+1;j<n;j++){
            if(b[i]<=a[j]+y&&b[i]>=a[j]-x){
                printf("%d %d\n",j,i);
                count++;
                break; } } }
	return 0; }