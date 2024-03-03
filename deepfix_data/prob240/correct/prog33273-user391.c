#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int fact(int n){
    int pro;
    if(n==1)
     return 1;
    pro=n*fact(n-1);
    return pro; }
int main() {
	int num_test,k;
	scanf("%d",&num_test);
	int num[200];
	for(k=0;k<num_test;k++){
	    scanf("%d",num[k]); }
	printf("%d %d %d",fact(3),fact(5),fact(4));
	return 0; }