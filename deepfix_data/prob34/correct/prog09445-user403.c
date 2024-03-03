#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,flag=0,i,a[20],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&t);
	for(i=1;i<n-1;i++) {
	    if( ( (  a[i]>(a[i+1]  )  &&  a[i]>(a[i-1]) ) ||  (a[0]>a[1])  ||  (a[n-1]>a[n-2])  ))
	    flag=1; }
	if(flag==1|| n==1)
	printf("Yes");
	else
	    printf("No\n");
	    while(t>0) {
	        scanf("%d",&i);
	        if( ( (  a[i]>(a[i+1]  )  &&  a[i]>(a[i-1]) ) ||  (a[0]>a[1])  ||  (a[n-1]>a[n-2])  ))
	            printf("Yes");
	else
	    printf("No\n");
	        t--; }
	return 0; }