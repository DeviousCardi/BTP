#include <stdio.h>
#include <stdlib.h>
int A(int m,int n){
    int a;
    if(m==0){
        a=n+1; }
    else if((m>0)&&(n==0)){
        a=A(m-1,1); }
    else if((m>0)&&(n>0)){
        a=A(m-1,A(m,n-1)); }
    return a; }
int main() {
	int k,i,j,m,n,count=0;
	scanf("%d",&k);
	for(i=0;i<=m+1;i++){
	    for(j=0;j<=n+1;j++){
	        if(A(i,j)==k){
	            printf("%d %d",i,j);
	            count=count+1; } } }
	if(count==0){
	    printf("-1"); }
	return 0; }