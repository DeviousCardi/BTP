#include <stdio.h>
int contsub(int m1,int m2,int b1[20],int b2[20]);
int contsub(int m1,int m2,int b1[20],int b2[20]) {
    int c=0,i,j;
	if(m1>m2) {
	    for(i=0;i<=m1-m2;i++) {
	        if(i==m1-m2) {
	            printf("NO");
	            break; }
	        for(j=i;j<i+m2;j++) {
	            if(b1[j]==b2[j-i]) {
	                c=c+1; }
	            else {
	                c=0; } }
	        if(c==m2) {
	            printf("YES");
	            break; } } }
	return 0; }
int main() {
	int n1,n2,a1[20],a2[20],i;
	scanf("%d",&n1);
	for(i=0;i<n1;i++) {
	    scanf("%d",&a1[i]); }
	scanf("%d",&n2);
	for(i=0;i<n2;i++) {
	    scanf("%d",&a2[i]); }
	contsub(n1,n2,a1[20],a2[20]);
	return 0; }