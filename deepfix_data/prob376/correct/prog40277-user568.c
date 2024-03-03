#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int c;
    if(n==0){
        c=1; }
    else{
        c=catalan(n-1)*(n-1);
        c=c+1; }
    return c; }
int main() {
	int t;
	scanf("%d",&t);
	int a[t],c[t],i;
	for(i=0;i<t;i++){
	    scanf("%d",&a[i]);
	    c[i]=catalan(a[i]);
	    printf("%d\n",c[i]); }
	return 0; }