#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	if(n==1)
	printf("Yes");
	else{
	    if(a[0]>a[1])
	    printf("Yes");
	    else
	    if(a[n-1]>a[n-2])
	    printf("Yes");
	    else
	    for(i=n-1;i>0;i--){
	        if(a[i]>a[i-1] && a[i]>a[i+1]){
	            printf("Yes");
	            break; }
	        return 0; } }
	printf("No");
	return 0; }