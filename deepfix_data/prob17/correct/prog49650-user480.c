#include <stdio.h>
int main() {
    int n1,n2,a[n1],b[n2],i,j,c;
    c=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    for(j=0;j<n2;j++) {
        scanf("%d",b[j]); }
    for(j=0;j<n2;j++) {
	    for(i=0;i<n1;i++) {
	        if(b[j]==a[i]) {
	            c++; } } }
	if(c==n2)
	printf("YES");
	else
	printf("NO");
	return 0; }