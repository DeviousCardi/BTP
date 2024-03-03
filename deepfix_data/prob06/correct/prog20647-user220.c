#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,m,x,y,i,j;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<m;i++){
	    scanf("%d",&b[i]); }
int count,t;
	for(i=0;i<n;i++){
	    count=0;t=0;
	    for(j=t;j<m;j++){
	        if(a[i]==b[j]){
	            count=1;
	            printf("%d %d\n",i+1,j+1);
	            break; }
	        t++; }
	        if(count==0){
	        for(j=t;j<m;j++){
	        if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)){
	            printf("%d %d\n",i+1,j+1);
	            break; }
	        t++; } } }
	return 0; }