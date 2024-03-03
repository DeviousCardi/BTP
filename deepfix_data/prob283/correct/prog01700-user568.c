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
    printf("%d",A(3,5));
	return 0; }