#include <stdio.h>
#include <stdlib.h>
int main() {
	 int n,i ,j ;
	 int arrey[n];
	 scanf("%d",&n);
	 for(i=0;i<n;i++) {
	         scanf("%d",&arrey[i]); }
	         for(j=1;j>n-1;j++) {
	              if(((arrey[j]>arrey[j-1])&&(arrey[j]>arrey[j+1]))||(arrey[j]>arrey[j-1]))
	                {   printf("Yes");
	                    return 0; } }
	            printf("No");
	return 0; }