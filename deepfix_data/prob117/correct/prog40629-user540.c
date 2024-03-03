#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int T(int);
int T(int n) {
    if(n==1) {
        return 1; }
     else
     return 2*T(n-1)+1; }
int main() {
	int t,i,n;
	int a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	        scanf("%d",&a[i]); }
	for(i=0;i<t;i++){
	    for(n=0;n<100000;n++){
	    if(a[i]==T(n)){
	        printf("yes\n"); }
	    else
	    printf("no"); } }
	return 0; }