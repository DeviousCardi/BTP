#include <stdio.h>
#include <stdlib.h>
int main() {
	int c,d,a[20],b[20],max,i;
	scanf("%d%d",&c,&d);
	if(c>=d) {
	    max=c; }
	    else {
	    max=d; }
	int k[max];
	for(i=1;i<=c;i++) {
	    scanf("%d",&a[c-i]); }
	for(i=1;i<=d;i++) {
	    scanf("%d",&b[d-i]); }
	for(i=0;i<max;i++) {
	    k[i]=a[i]+b[i];
	    if(i-1>=0){
	    k[i]=a[i]+b[i]+k[i-1]/10;
	    if(i-1>=0&&k[i-1]>9) {
	        k[i-1]=k[i-1]%10; } }
	    for(i=1;i<=max;i++) {
	        printf("%d",k[max-i]); }
     return 0;
}}