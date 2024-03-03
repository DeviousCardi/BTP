#include <stdio.h>
#include <stdlib.h>
int max_soldiers(int n,int m,int *a,int *b){
    int i=0,j=0,count=0;
    while(i<n){
        while(j<m){
            if((b[j]>=a[i]-x)&&(b[j]<=a[i]+y)) {
                count++;
                j++;
                break; }
            j++; }
        if(j==m){
            break; }
        i++; }
    return count; }
int main() {
	int n,m,x,y;
	scanf("%d%d%d%d",&n,&m,&x,&y);
	int *a,*b;
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(m*sizeof(int));
	int i;
	for(i=0;i<n;i++){
	    scanf("%d",a+i); }
	for(i=0;i<m;i++){
	    scanf("%d",b+i); }
	printf("%d\n",max_soldiers(n,m,a,b));
	return 0; }