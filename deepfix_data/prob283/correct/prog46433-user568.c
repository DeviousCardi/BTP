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
	int k,i,j,count=0;
	scanf("%d",&k);
    for(j=0;j<=5;j++){
	    for(i=0;i<=3;i++){
	        if(A(i,j)==k&&i!=0){
	            printf("%d %d",i,j);
	            count=count+1;
	            break; } } }
	if(count==0){
	    printf("-1"); }
	return 0; }