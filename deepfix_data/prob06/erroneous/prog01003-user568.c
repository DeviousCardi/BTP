#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,m,x,y;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc((sizeof(int))*n);
	b=(int*)malloc((sizeof(int))*m);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(j=0;j<m;j++){
	    scanf("%d",&b[j]); }
	int p[100],q[100],k=0,l=0;
	for(j=0;j<m;j++){
	       while(i<n){
	           if((a[i]-x<=b[j])&&(a[i]+y>=b[j])){
	               p[l]=i+1;
	               q[l]=j+1;
	               l++;
	               i++;
	               break; }
	           else{
	               i++; } } } }
	printf("%d\n",l);
	for(i=0;i<l;i++){
	    printf("%d %d\n",p[i],q[i]); }
	return 0; }