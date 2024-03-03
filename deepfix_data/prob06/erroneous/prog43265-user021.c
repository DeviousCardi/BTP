#include <stdio.h>
#include <stdlib.h>
void num(int *a,int * b,int m,int n,int x,int y){
    int i=0,j=0;;
    if(b[j]>=a[i]-x && b[j]<=a[i]+y){
        j++;
        i++; }
    else{
        i++; }
   printf("%d",j); }
int main() {
	int m,n,x,y;
	int i;
	int k;
	int *a,*b;
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&x);
	scanf("%d",&y);
	a=(int*)malloc(m*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	for(i=0;i<m;i++){
	    scanf("%d",&a[i]); }
	for(i=0;i<n;i++){
	    scanf("%d",&b[i]); }
	num(a,b,m,n,x,y)
	return 0; }