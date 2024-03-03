#include <stdio.h>
#include <stdlib.h>
int inverse(int a,int b){
    int temp;
    temp=a;
    b=temp;
    a=b;
    return a; }
int main() {
	long int n,s,a[10000],i,j;
	scanf("%ld",&n);
	for(i=0;i<n;i++){
	    scanf("%ld",&a[i]); }
	scanf("%ld",&s);
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        if((s-a[i]==a[j])&&(a[i]!=a[j])&&(a[j]>a[i])){
	        printf("(%ld,%ld)\n",a[i],a[j]); } } }
	return 0; }