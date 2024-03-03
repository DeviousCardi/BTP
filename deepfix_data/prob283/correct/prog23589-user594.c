#include <stdio.h>
#include <stdlib.h>
int A(int m, int n){
    if(m==0){
        return n+1; }
    if(n==0&&m>0){
        return A(m-1,1); }
    if(n>0&&m>0){
        return A(m-1,A(m,n-1)); }
    if(m<0||n<0){
        return -1; } }
int main() {
	int m,n,i,j,k;
	int a[3][5];
	scanf("%d",&k);
	for(i=0;i<3;i++){
	    for(j=0;j<5;j++){
	        a[i][j]=A(i,j);
	        if(a[i][j]==k){
	            m=i;
	            n=j;
	            printf("%d %d",m,n);
	            return 0; } } }
	printf("-1");
	return 0; }