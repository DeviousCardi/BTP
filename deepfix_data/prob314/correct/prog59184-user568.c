#include <stdio.h>
#include <stdlib.h>
int main() {
	int x,y,i,m,n;
	scanf("%d\n",&x);
	int a[x];
	for(i=0;i<=x-1;i++){
	    scanf("%d",&m);
	    a[i]=m; }
	scanf("%d\n",&y);
	 for(i=0;i<y;++i) {
	        scanf("%d",&n);
	        if(n==0) {
	                if(a[0]<a[1]) {
	                       printf("Yes");
	                       printf("endl"); }
	                else
	                    printf("No\n"); }
	        if(n==x-1) {
	                if(a[x-1]<a[x-2])
	                    printf("Yes\n");
	                else
	                    printf("No\n"); }
	        if((a[n]<a[n-1])&&(a[n]<a[n+1]))
	            printf("Yes\n");
	        else
	            printf("No\n"); }
	return 0; }