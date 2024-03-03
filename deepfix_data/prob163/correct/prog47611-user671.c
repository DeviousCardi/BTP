#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
    if (a>b){
        return a; }
    else return b; }
int main() {
    int n1,n2,i,j;
    scanf("%d\n%d\n",&n1,&n2);
    int p=max(n1,n2),num1[n1],num2[n2];
	for (i=0;i<n1;i++){
	    num1[i]=getchar(); }
	for (j=0;j<n2;j++){
	    num2[j]=getchar(); }
	num1[n1]=num1[p];
	num2[n2]=num2[p];
	int k,l,a[p+1];
	for(k=0;k<=p+1;k++){
	    if((num1[p-1-k]+num2[p-1-k])<='9'){
	        a[p-k]=num1[p-k-1]+num2[p-k-1]; }
	    else{
	        (a[p-k])= (num1[p-1-k]+num2[p-1-k])-'10';
	        num1[p-2-k]=num1[p-2-k]+'1'; } }
	       for (l=0;l<p+1;l++){ }
	return 0; }