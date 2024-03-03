#include <stdio.h>
#include <stdlib.h>
void array(c[],int size) {
    for(i=0;i<n;i++)
    {scanf("%d",&c[i]);} }
int max(int a,int b) {
    if(a>b)
    return a;
    else
    return b; }
int main() {
	int n,i,q,j,s=0;
	int k=0;
	scanf("%d%d",&n,&q);
	int a[n];
	int b[q];
	int c[502];
	for(i=n-1;i>=0;i--) {
	    scanf("%d",&a[i]);
	for(i=q-1;i>=0;i--) {
	    scanf("%d",&b[i]);
	    s=a[i]+b[i]+k;
	    for(j=max(n-1,q-1);j>=0;j--) {
	        c[j]=s%10; } } }
	printf("%d",array(c[],max(n-1,q-1)));
	return 0; }