#include <stdio.h>
#include <stdlib.h>
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
	int a,b,i,n;
	char s1[600];
	char s2[600];
	scanf("%d",&a);
	scanf("%d",&b);printf("%d",max(a,b));
	for(i=0;i<a;i++) {
	    scanf("%c\n",&s1[i]); }
	for(i=0;i<b;i++) {
	    scanf("%c\n",&s2[i]); }
	for(i=0;i<max(a,b),i++) {
	    if(a>b) {
	        s2[i]=s2[i+1]; }
	    else if(b>a) {
	        s1[i]=s1[i+1]; } }
	for(i=max(a,b)-1;i>=0;i--) {
	    s3[i]= }
	return 0; }