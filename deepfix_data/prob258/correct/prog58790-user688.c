#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, t, n, a[n], x;
	i=0;
	scanf("%d\n", &n);
	i=0;
	scanf("%d\n", &x);
	while(i<n){
	    a[i]=x;
	    i++; }
	if(a[0]>a[1] || a[n]>a[n-1]){
	    printf("Yes"); }
	else{
	    t=1;
	    while(t<n){
	        if(a[t]>a[t-1] && a[t]>a[t+1]){
	            printf("Yes"); }
	    else printf("No"); } }
	return 0; }