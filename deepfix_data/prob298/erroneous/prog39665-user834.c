#include <stdio.h>
#include <stdlib.h>
int catalan(int a){
    if(a==1)
    return 1;
    return (4*catalan(a-1)-3*catalan(a-2)); }
int main() {
	int t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
	    int j=0,n,f=0;
	    scanf("%d",&n);
	    while(catalan(j)<=n){
	        if(catalan(j)<=n){
	            f=1;
	            break; }
	        else
	        j++; }
	    if(f==1)
	    printf("Yes/n");
	    else
	    printf("No/n"); }
	return 0; }