#include <stdio.h>
#include <stdlib.h>
int n1=0,n2=0,t1=0,t2=0;
void eatbob(int*a,int n) {
    t2+=a[n-n2];n2++; }
void eatalice(int *a,int n) {
    t1+=a[n1];n1++; }
int bars(int*a,int n) {
    if(n1+n2==n)
    return n1;
    if(t1<=t2)
    eatalice(a,n);
    else
    eatbob(a,n);
    return bars(a,n); }
int main() {
	int n,i;
	scanf("%d",&n);
	int*a=malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	i=bars(a,n);
	printf("%d %d",i,n-i);
	return 0; }