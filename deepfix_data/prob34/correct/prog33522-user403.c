#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i,a[20],t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&t);
	    while(t>0) {
	        scanf("%d",&i);
	        if(n==1)
	        printf("Yes\n");
	        else if(i!=0 || i!=n-1)
	        {if( ( (  a[i]>(a[i+1]  )  &&  a[i]>(a[i-1]) )   ))
	            printf("Yes\n");
	else
	    printf("No\n"); }
	        else if(i==0) {
	            if((a[i]>a[i+1]) )
	            printf("ohh yeah Yes\n");
	else
	    printf("No\n"); }
	        else if(i==n-1) {
	            if((a[n-1]>a[n-2]) )
	            printf("Yes\n");
	else
	    printf("No\n"); }
	        t--; }
	return 0; }