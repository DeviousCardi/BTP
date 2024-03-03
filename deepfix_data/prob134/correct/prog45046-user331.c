#include <stdio.h>
#include <stdlib.h>
int binomial(int n, int k){
    if(n<k){
        return 0; }
    else if(n==0&&k==0){
        return 1; }
    else if(k==0){
        return 1; }
    else{
        return binomial(n-1,k)+binomial(n-1,k-1); } }
int main() {
	int b,i,j;
	scanf("%d",&b);
	for(i=0;i<=20;i=i+1){
	    for(j=0;j<=20;j=j+1){
	        if(b==binomial(i,j)){
	            printf("%d %d",i,j);
	            break; } }
	    if(b==binomial(i,j)){
	        break; }
	    else if(j>20){
	        printf("-1"); } }
	return 0; }