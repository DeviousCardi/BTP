#include <stdio.h>
int main() {
	int n1,n2,i,j,count,count2=0;
	scanf("%d",&n1);
	int numbers1[n1];
	i=0;
	for(i;i<=n1-1;i++) {
	    scanf("%d",&numbers1[i]); }
	scanf("%d",&n2);
	int numbers2[n2];
	i=0;
	for(i;i<=n2-1;i++) {
	    scanf("%d",&numbers2[i]); }
	i=0;
	for(i;i<=n1-1;i++) {
	   j=0;
	   count=0;
	   if(numbers1[i]==numbers2[j]) {
	     for(j;j<=n2-1;j++) {
	         if(numbers1[i+j]==numbers2[j]) {
	             count++; } }
	     if(count==n2) {
	       count2=1;
	       break; } } }
	if(count2==1) {
	    printf("YES"); }
	else {
	    printf("NO"); }
	return 0; }