#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int c,i;
    if(n==0){
        c=1; }
    else{
        c=0;
        for(i=1;i<=n/2;i++){
            c=c+catalan(i)*catalan(n-i); } }
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