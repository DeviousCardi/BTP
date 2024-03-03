#include <stdio.h>
#include <stdlib.h>
int catalan(int n){
    int cat=0,i;
    if(n<=1)
    return 1;
    else
    for(i=0;i<n;i++){
        cat=cat+catalan(i)*catalan(n-i-1);}
        return cat; }
int main() {
	int n,i,j,a[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]);
	    j=catalan(a[i]);
	    if(a[i]==j)
	    printf("yes\n");
	    else("no\n"); }
	return 0; }