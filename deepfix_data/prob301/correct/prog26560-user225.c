#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,mode;
	int a[100000];
	scanf("%d\n",&n);
	for (i=0;i<n;i++) {
	    scanf("%d",&a[i]); }
	 for (i=0;i<n;i++) {
        for(j=1;j<n-1;j++) {
            if(a[i] >= a[j])
            { mode = a[i];} } }
    printf("%d",mode);
	return 0; }