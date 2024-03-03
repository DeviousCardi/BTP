#include <stdio.h>
#include <stdlib.h>
int n,m,x,y;
int soldiers(int a[2][n],int*b) {
    int i,j,k=0;
    for(i=0;i<m;i++) {
        for(j=0;j<n;j++){
            if((a[0][j]-x<=b[i])&&(a[0][j]+y>=b[i])){
                if(a[1][j]==0){
                a[1][j]=1;
                k++;break; } } } }
    return k; }
int main() {
	int i,j=0;
	scanf("%d %d %d %d",&n,&m,&x,&y);
	int a[2][n];
	int*b=(int*)malloc(m*sizeof(int));
	for(i=0;i<n;i++){
	scanf("%d",&a[0][i]);
	a[1][i]=0; }
	for(i=0;i<m;i++)
	scanf("%d",&b[i]);
	printf("%d\n",soldiers(a,b));
	for(i=0;i<n;i++){
	    if(a[1][i]==1){
	    printf("%d %d\n",i,j);j++; } }
	return 0; }