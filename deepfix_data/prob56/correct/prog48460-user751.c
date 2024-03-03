#include <stdio.h>
#include <stdlib.h>
int ctln_no(int n){
    if(n==0){return 1;}
return ((2*(2*n-1))/(n+1))*ctln_no(n-1); }
int main() {
	int t,i,j;
	scanf("%d\n",&t);
	int a[t][1];
	for(i=0;i<t;i++){
	    scanf("%d\n",&a[i][1]); }
	for(i=0;i<t;i++){
	    for(j=0;ctln_no(j)<a[i][1];j++){
	        continue; }
	    if(ctln_no(j)==a[i][1]) printf("%d\n",ctln_no(j+1));
	    else printf("%d\n",ctln_no(j)); }
	return 0; }