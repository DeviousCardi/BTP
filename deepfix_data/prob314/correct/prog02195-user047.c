#include <stdio.h>
#include <stdlib.h>
int main() {
	       int a[20],n,i,t,j,k;
	       scanf("%d\n",&n);
	       for (i=0;i<n;i++)
	       scanf("%d\n",&a[i]);
	       scanf("%d",&t);
	        for (k=0;k<t;k++){
	            scanf("%d\n",&j);
	            if(j==0){
	                if(a[0]<a[1])
	                printf("Yes\n");
	                else
	                printf("No\n"); }
	            else
	            if(j==n-1){
	                if(a[n-1]<a[n-2])
	                printf("Yes\n");
	                  else
	                printf("No\n"); }
	            else
	           if(a[j]<a[j-1] && a[j]<a[j+1])
	           printf("Yes\n");
	           else
	           printf("No\n"); }
return 0; }