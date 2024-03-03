#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if (a>b){
        return a; }
    else return b; }
int main() {
    int n1,n2,i,j;
    scanf("%d\n%d\n",&n1,&n2);
    int p=max(n1,n2),num1[p],num2[p];
	for (i=0;i<n1;i++){
	    scanf("%d\n",&num1[i]); }
	for (j=0;j<n2;j++){
	    scanf("%d\n",&num2[j]); }
	int k,l,a[p+1];
	for(k=0;k<p+1;k++){
	    if((num1[p-1-i]+num2[p-1-i])<=9){
	        a[p-i]=num1[p-i-1]+num2[p-i-1]; }
	    else{
	        a[p-i]=num1[p-1-i]+num2[p-1-i]-10;
	        num1[p-2-i]=num1[p-2-i]+1; }
	   for (l=0;l<p+1;l++){ } }
	return 0; }