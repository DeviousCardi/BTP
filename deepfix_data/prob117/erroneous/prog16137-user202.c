#include <stdio.h>
#include <stdlib.h>
long int toh(int n){
    if(n==1)  return 1;
    else return (2*toh(n-1))+1; }
int main() {
	long int k[100];
	int i,f=0,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%ld\n",&k[i]); }
	for(j=0;j<n;j++){
	    i=1;
	    while(toh(i)<=k[j]){
	        if(toh(i)==k[j])  f=1;
	        i++; }
	    if(f==1)  printf("yes\n");
	    else printf("no\n"); }
	return 0; }