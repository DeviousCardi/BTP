#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int fact(int n){
    int pro;
    if(n==0)
     return 1;
    pro=n*fact(n-1);
    return pro; }
int main() {
	int num_test,k;
	scanf("%d",&num_test);
	int num[100];
	for(k=0;k<num_test;k++){
	    scanf("%d",&num[k]); }
	int cat_series[100];
	for(k=0;k<100;k++){
	    cat_series[k]=fact(2*k)/(fact(k+1)*fact(k)); }
	return 0; }