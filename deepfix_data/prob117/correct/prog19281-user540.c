#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int T(int);
int T(int n) {
    if(n==2) {
        return 1; }
    if (n%2==0) {
        return T(n/2); }
     else
     return 0; }
int main() {
	int t,i,n,f=0;
	int a[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
	        scanf("%d",&a[i]); }
printf("%d",T(3));
	return 0; }