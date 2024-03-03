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
	int n,i,j,a[n],t[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
	    scanf("%d\n",&a[i]);}
	   for(j=0;j<17;j++){
	       t[j]=catalan(j); }
	   for(j=0;j<n;j++){
	   for(i=0;i<17;i++){
	       if(t[i]==a[j])
	    printf("yes\n");
	    else("no\n"); } }
	return 0; }