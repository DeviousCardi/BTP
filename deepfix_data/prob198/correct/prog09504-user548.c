#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int a[21],b[21],i,j,min=pow(2,31)-1,m,n,t=0,k,x;
	scanf("%d",&m);
	for(i=0;i<m;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&n);
	for(j=0;j<n;j++) {
	    scanf("%d",&b[j]); }
	for(i=0;i<m;i++) {
	    for(j=0,k=0;j<n;j++,k++) {
	        if(a[i]!=b[j]) {
	            x=a[i]; }
	        else
	        t=1; }
	            if(min>x) {
	            min=x; } }
	    if(t==1)
	    printf("NO");
	    else
	    printf("%d",min);
	return 0; }