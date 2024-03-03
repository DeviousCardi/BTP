#include <stdio.h>
#include <stdlib.h>
int f(int n){
    int term;
    if(n>=0){
        if(n==0){
            term = 0; }
        else if(n==1||n==2){
            term = 1; }
        else{
            term = f(n-1)+f(n-2); }
        return term; } }
int main() {
	int t,k,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    scanf("%d",&k);
	    printf("%d\n",f(k)); }
	return 0; }