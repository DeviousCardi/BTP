#include <stdio.h>
#include <stdlib.h>
int C(int n){
    if(n==0){
        return 1;
    }else{
        if(n==1)
        return 1;
        else
        return (2*(2*n-1)/(float)(n+1))*C(n-1); } }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    if(k<=0){
	        printf("no");
	    }else{
	        for(n=0;n<1000;n++){
	            if(C(n)==k){
	                printf("yes");
	                break;
	            }else{
	                if(k<C(n)&&k>C(n-1))
	                printf("no");
	                break;
	                else
	                continue; } } } }
	return 0; }