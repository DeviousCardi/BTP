#include <stdio.h>
#include <stdlib.h>
int t;
int bars(int *a,int n) {
    int i,t1=0;
    for(i=0;i<n;i++){
        t1+=a[i];
        if(t1>=t/2)
        return i+1; }
    return i; }
int main() {
	int n,i;
	scanf("%d",&n);
	int*a=malloc(n*sizeof(int));
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
	t+=a[i]; }
	printf("%d %d",bars(a,n),n-bars(a,n));
	return 0; }