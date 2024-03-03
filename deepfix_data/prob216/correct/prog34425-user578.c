#include <stdio.h>
#include <stdlib.h>
void fseries(int n) {
    int sum,i,j,a[20];
    i=0;
    j=1;
    sum = i + j;
    i = j;
    j = sum; ; }
int main() {
int n,a[20],k,p;
scanf("%d",&n);
for(p=0;p<=n;p++) {
    scanf("%d",&a[p]); }
for(k=0;k<=n;k++) {
    fseries(a[k]); }
	return 0; }