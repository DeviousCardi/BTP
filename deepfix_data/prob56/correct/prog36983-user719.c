#include <stdio.h>
#include <stdlib.h>
long catalan(long k){
    if(k==0)
        return 1;
    return (catalan(k-1))*2*(2*k-1)/(k+1); }
int main() {
    int t,i,j;
    scanf("%d\n",&t);
	long a[t];
	for(i=0;i<t;i++){
	    scanf("%ld\n",&a[i]); }
	for(i=0;i<t;i++){
	    for(j=0;j<100;j++){
	        if(catalan(j)>a[i]){
	            printf("%d\n",j);
	            break; } } }
	return 0; }