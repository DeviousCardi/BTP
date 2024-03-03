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
	    printf("%d",valueof(m)); }
	return 0; }
int valueof(int g) {
    int t;
    if(g==1) {
        t=0;
        return t; }
    else if(g==2) {
        t=1;
        return t; }
    else(g>=3) {
    t=valueof(g-1)+valueof(g-2);
    return t; } }