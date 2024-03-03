#include <stdio.h>
int main() {
	int a[21],b[21],i,j,t=0,n,m,count=0,p;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	scanf("%d",&m);
	for(j=0;j<m;j++) {
	    scanf("%d",&b[j]); }
	    for(i=0;i<n;i++) {
	        if(b[0]==a[i]) {
	            p=i;
	            for(i=p,j=0;i<p+m-1,j<m;i++,j++) {
	                if(a[i]==b[j]) {
	                    t=1; }
	                else
	                t=0; } } }
	if(t==1)
	printf("YES");
	else
	printf("NO");
	return 0; }