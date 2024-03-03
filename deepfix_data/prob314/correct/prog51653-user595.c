#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n,t,co;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d\n",&a[i]); }
	scanf("%d\n",&t);
	for(i=0;i<t;i++) {
	    scanf("%d\n",&co);
	    if(co>0&&co<n-1) {
	        if(a[co]<a[co+1]&&a[co]<a[co-1])
	         printf("Yes\n");
	        else printf("No\n"); }
	    else
	        {if(co==0&&a[co]<a[1])
            printf("Yes\n");
            else  printf("No\n");
            if (co==n-1&&a[co]>a[n-2])
            printf("Yes\n");
            else printf("No\n"); } }
	return 0; }