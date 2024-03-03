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
	int num[10];
	for(k=0;k<num_test;k++){
	    scanf("%d",&num[k]); }
	long int cat_series[10];
	for(k=0;k<10;k++){
	    cat_series[k]=fact(2*k)/(fact(k+1)*fact(k)); }
	printf("%d %d %d %d %d",cat_series[0],cat_series[1],cat_series[2],cat_series[3],cat_series[8]);
	return 0; }