#include <stdio.h>
#include <stdlib.h>
int catalan(int a){
    int cat=0,i;
    if(a<=1)
    return 1;
    else
    for(i=0;i<a;i++){
        cat=cat+catalan(i)*catalan(a-i-1);}
        return cat; }
int main() {
	int n,i,j,a[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);
	    catalan(a[i]);
	    if(a[i]==catalan(a[i]))
	    printf("yes\n");
	    else("no\n"); }
	return 0; }