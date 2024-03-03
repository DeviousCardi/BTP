#include <stdio.h>
#include <stdlib.h>
int valueof(int g);
int main() {
	int n,i,j,a[20],m;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	for(j=0;j<n;j++) {
	    m=a[j];
	    if(m==1)
	    printf("0");
	    else if(m==2)
	    printf("1");
	    else {
	        printf("%d",valueof(m)); } }
	return 0; }
int valueof(int g) {
    int t;
        t=valueof(g-1)+valueof(g-2);
    return t; }