#include <stdio.h>
int main() {
    int d,n,c,i;
    scanf("%d",&d);
    scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++;)a[i]=0;
	for(i=0;i<d;i++;)scanf("%d",&a[i]);
    for(i=d;i<n;i++){
        for(c=1;c<d;c++){
            a[i]=a[i]+a[i-c]; } }
	return 0; }