#include <stdio.h>
int main() {
	int a[50];
	int i,j,n,x=0,p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&a[i]); }
	for(p=0;p<n;p++) {
	    for(j=p+1;j<n;j++) {
	        if(a[j]==a[p]) {
	        x=1;
	        break; } }
	   if(x==1)
	    break; }
	if(x==1)
	    printf("YES");
	else
	    printf("NO");
	return 0; }