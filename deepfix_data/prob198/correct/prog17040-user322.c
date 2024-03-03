#include <stdio.h>
#include <stdlib.h>
int main() {
	int a[20],b[20],n1,n2,i,j,l;
	scanf("%d\n",&n1);
	for(i=0;i<n1;i++)
	scanf("%d\n",&a[i]);
	scanf("%d\n",&n2);
	for(i=0;i<n2;i++)
	scanf("%d\n",&a[i]);
	for(i=0;i<n1;i++){
    	for(j=i+1;i<n1;i++){
    	   if (a[i]>a[j]){
    	   l=a[i];
    	   a[i]=a[j];
    	   a[j]=l; } } }
	int p,q,r;
	q=0;
	r=0;
	for(i=0;i<n1;i++){
	    p=0;
    	for(j=0;i<n2;i++){
    	   if(a[i]!=b[j])
    	    p=p+1; }
    	if(p==n2){
    	    q=i;
    	    break; }
    	if(p!=n2)
    	r=r+1; }
	if(r==n1){
	    printf("NO");
	    exit (0); }
	printf("%d",a[q]);
	return 0; }