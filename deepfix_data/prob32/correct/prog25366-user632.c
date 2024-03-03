#include <stdio.h>
#include <stdlib.h>
int main() {
       int n,i;
	        scanf("%d\n",&n);
	       char a[n];
	       if(n==1)
	        printf("Yes\n");
	        else {
	            int error=0;
	        for(i=0;i<n;i++)  {
	          scanf("%c\n",&a[i]); }
	          for (i=0;i<n;i++){
	        if(i==0){
	           if(a[0]>a[1]){
	           error=1;
	            break;
	        }}
	        if(i==n-1){
	            if(a[n-1]>a[n-2]){
	                 error=1;
	            break;
	        }}
	        else{
	            if(a[i]>a[i-1]&&a[i]>a[i+1]){
	                  error=1;
	                break; } } }
	       if (error==1)
	        printf("Yes");
	        else
	            printf("No"); }
	return 0; }