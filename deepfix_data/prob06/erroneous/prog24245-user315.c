#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y;
	int *a1,*b1,*c1;
	int *a2;
	int i;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	a1=(int*)malloc(n*sizeof(int));
	b1=(int*)malloc(n*sizeof(int));
	c1=(int*)malloc(n*sizeof(int));
	a2=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",&a1[i]);
	    b[i]=a[i]-x;
	    c[i]=a[i]+y; }
	scanf("\n");
	for(i=0;i<m;i++){
	    scanf("%d",&a2[i]); }
	int j=0,k=0;
	while((j<n)&&(k<m)){
	    if(a2[k]<b1[j]) j++;
	    else if((a2[k]>=b1[j])&&(a2[k]<=c1[j])){
	        printf("%d %d\n",k,j);
	        j++;k++; }
	    else    k++; }
	free(a2);
	free(c1);
	free(b1);
	free(a1);
	return 0; }