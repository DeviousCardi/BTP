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
int count,t=0;
if((n==0)||(m==0)){
    printf("0"); }
else{
	for(i=0;i<n;i++){
	    count=0;
	    for(j=t;j<m;j++){
	        if(a[i]==b[j]){
	        count=1;
	        printf("%d %d",i+1,j+1);
	        break; }
	   if(count==0){
	   if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)){
	      count=1;
	      printf("%d %d",i+1;j+1);
	      break; } }
    if(count==1)
    t++; } }
	return 0; }