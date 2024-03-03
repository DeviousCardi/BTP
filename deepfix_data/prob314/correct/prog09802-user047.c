#include <stdio.h>
#include <stdlib.h>
int main() {
	       int a[20],n,i,t,j;
	       scanf("%d\n",&n);
	       for (i=0;i<n;i++)
	       scanf("%d\n",&a[i]);
	       scanf("%d",&t);
	        for (j=0;j<t;j++){
	            if(j==n-1){
	                if(n-1<n-2)
	                printf("Yes\n"); }
	            else
	           if(a[j+1]<a[j] && a[j+1]<a[j+2])
	           printf("Yes\n");
	           else
	           printf("No\n"); }
return 0; }