#include <stdio.h>
int main() {
    int n,i,j,count;
    count=0;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d ",a[i]); }
	for(i=0;i<n;i++) {
	    for(j=i+1;j<n;j++) {
	        if(a[i]==a[j]) {
	            count=1;
	            break; } }
	    if(count==1)
	        break; }
	if(count==1)
	    printf("YES\n");
	else
	    printf("NO\n");
	return 0; }