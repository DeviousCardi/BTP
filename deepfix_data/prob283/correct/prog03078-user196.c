#include <stdio.h>
#include <stdlib.h>
int ackerman(int m, int n) {
    if(m==0) {
        return n+1; }
    if(n==0 && m>0) {
        return ackerman(m-1,1); }
    if(m>0 &&n>0) {
        return ackerman(m-1,ackerman(m,n-1)); }
    return 0; }
int main() {
	int k, a[3][5];
	scanf("%d",&k);
	int i,j;
	for (i=0;i<=3;i++) {
	    for(j=0;j<=5;j++) {
	        a[i][j]=ackerman(i,j); } }
	for (i=0;i<=3;i++) {
	    for(j=0;j<=5;j++) {
	        printf("%d\t",a[i][j]); } }
	return 0; }