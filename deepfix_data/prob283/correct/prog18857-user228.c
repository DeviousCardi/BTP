#include <stdio.h>
#include <stdlib.h>
int A(int m,int n){
    if(m==0){
        return n+1;
    }else{
        if(n==0&&m!=0)
        return A(m-1,1);
        else
        return A(m-1,A(m,n-1)); } }
int main() {
	int m,n,k,c;
	scanf("%d",&k);
	for(m=0;m<4;m++){
	    c=0;
	    for(n=0;n<6;n++){
	        if(k==A(m,n)){
	            printf("%d %d",m,n);
	            c=1;
	            break; } }
	    if(c==1){
	        break; } }
	if(c==0){
	    printf("-1"); }
	return 0; }