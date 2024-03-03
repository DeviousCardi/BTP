#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
	scanf("%d",&n);
	int a[10000],b;
	for(i=0;i<n,i++) {
	    scanf("%d",&a[i]); }
	int j,count=0;
	for(i=0;i<n;i++) {
	    if(count=0){
	    for(j=1;j<n-i;j++) {
	        if(a[i]==a[i+j]) {
	        count++;
	        b=a[i] }
	        else
	        break; }
	    i=i+count; }
	    int a1,count1=0;
	    for(j=0;j<n-i;j++) {
	        if(a[i]==a[i+j]){
	        count1++;a1=a[i];}
	        else
	        break; }
	    i=i+count1;
	    if(count1>=count){
	    count=count1;
	    b=a1; } }
	printf("%d",b);
    return 0; }