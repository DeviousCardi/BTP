#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,n;
	int a[100000];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	return 0; }
int max( int b[100000]){
    int i;j;
    for (i=0;i<n;i++) {
        for(j=1;j<n-1;j++) {
            if(a[i]<a[j])
            { break;}
        } max=a[i];
        return max; } }