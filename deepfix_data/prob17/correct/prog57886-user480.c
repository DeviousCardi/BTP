#include <stdio.h>
int main() {
    int n1,n2,a[20],b[20],i,j,c,t=0,f=0;
    c=0;
    scanf("%d",&n1);
    for(i=0;i<n1;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&n2);
    for(j=0;j<n2;j++) {
        scanf("%d",&b[j]); }
    for(j=0;j<n2;j++) {
	    for(i=0;i<n1;i++) {
	        if(b[j]==a[i]) {
	            c++;
	            j++;
	        if(i==0) {
	             f=f+1; }
	            if((i-t)==1) {
	                f++;
	            }t=i; } } }
	printf("%d\n",f);
	if(c==n2&&f==n2)
	printf("YES");
	else
	printf("NO");
	return 0; }