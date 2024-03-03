#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
	int i,n,q,p,j,r;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
scanf("%d",&q);
	int b[q];
	for(i=0;i<q;i++) {
	    scanf("%d",&b[i]); }
	for(i=n-1;i>=0;i--) {
	        for(j=q-1;j>=0;j--) {
	            if(j==i+q-n) {
	                p=a[i]+a[i+q-n];
	                {if(p>=10) {
	                    r=p%10;
	                printf("%d",r); }
	                else printf("%d",p); } }
	           break; } }
     for(j=0;j<q-n;j++) {
         printf("%d",a[j]); }
	return 0; }