#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i ,a, count=0 ;
	scanf ("%d",&n) ;
	for (i=1;i<=n;i++){
	    a=n%i ;
	    if (a==0){
	        count=count+i ; }
	    else
	        continue ;
    if (count==n){
        printf("Yes"); }
    else
        printf ("No");
	return 0; }