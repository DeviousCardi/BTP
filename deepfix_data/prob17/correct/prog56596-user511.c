#include <stdio.h>
int main() {
	int a[20],b[20];
	int n1,n2,i,j,k,l,flag=0;
	scanf("%d",n1);
	for(i=0;i<n1;i++) {
	  scanf("%d",&a[i]); }
	scanf("%d",n2);
	for(i=0;i<n2;i++) {
	  scanf("%d",&b[i]); }
	for(i=0;i<n2;i++) {
	   for(j=0;j<n1;j++) {
	        if(b[i]==a[j]) {
	           for(k=i+1;k<n2;j++) {
	              l=j+1;
	              if(b[k]!=a[l]) {
	                   flag=1;
	                  break; }
	               j++; } }
	       if(flag==1) {
	       printf("NO");
	       break; } }
	   if(flag==1) {
	       printf("NO");
	       break; } }
	if(flag==0); {
	    printf("YES"); }
	return 0; }