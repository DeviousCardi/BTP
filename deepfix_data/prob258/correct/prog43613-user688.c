#include <stdio.h>
#include <stdlib.h>
int main() {
	int i, t, n, x;
	scanf("%d\n", &n);
	int a[n];
	i=0;
	scanf("%d\n", &x);
	while(i<n){
	    a[i]=x;
	    scanf("%d\n", &x);
	    i++; }
	if(a[0]>a[1] || a[n-1]>a[n-2]){
	    printf("Yes"); }
	else{
	    t=1;
	    while(t<n-1){
	        if(a[t]>a[t-1] && a[t]>a[t+1]){
	            printf("Yes");
	        	        break; }
	    else {printf("No");}
	    break;
	    t++; } }
	if(n==2 && a[0]==a[1]) printf("No");
	return 0; }