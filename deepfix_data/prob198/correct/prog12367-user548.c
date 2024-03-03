#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() {
	int a[25],b[25],i,j,min=pow(2,31)-1,m,n,t=0,k,x,count=0;
	scanf("%d",&m);
	for(i=0;i<m;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&n);
	for(j=0;j<n;j++) {
	    scanf("%d",&b[j]); }
	for(i=0;i<m;i++) {
	    for(j=0;j<n;j++) {
	        if(a[i]!=b[j]) {
	            x=a[i];
	            printf("**%d**",x);
	            count++; } }
	            if(min>x) {
	            min=x; } }
	    if(count==0)
	    printf("NO");
	    else
	    printf("%d",min);
	return 0; }