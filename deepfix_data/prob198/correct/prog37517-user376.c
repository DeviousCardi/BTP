#include <stdio.h>
#include <stdlib.h>
int main() {
	int n1,n2,i,j,k,m;
	scanf("%d",&n1);
	int a[n1];
	for(i=0;i<n1;i++)
	    scanf("%d",&a[i]);
    scanf("%d",&n2);
	int b[n2];
	for(i=0;i<n2;i++)
	    scanf("%d",&b[i]);
	for(i=0;i<n1;i++) {
	    for(k=0;k<n1;k++) {
	        if(a[i]<a[k])
	            m=a[i];
	        else
	            m=a[k]; }
	    for(j=0;j<n2;j++) {
	        if(m==b[j]);
	            break; }
	    if(m==b[j])
	        continue;
	    else
	        break; }
	    printf("%d",m);
	return 0; }