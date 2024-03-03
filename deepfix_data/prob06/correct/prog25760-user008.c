#include <stdio.h>
#include <stdlib.h>
int n,m,x,y;
int soldires(int*a,int*b) {
    int i,j,k=0;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++){
            if((a[i]-x<=b[j])&&(a[i]+y>=b[j])){
                printf("%d %d\n",i+1,j+1);
                b[j]=-200;
                k++;break; } } }
    return k; }
int main() {
	int i;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int*a=(int*)malloc(n*sizeof(int));
	int*b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	printf("%d\n",soldires(a,b));
	return 0; }