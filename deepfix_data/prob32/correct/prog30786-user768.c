#include <stdio.h>
#include <stdlib.h>
int main() {
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
   for(i=1;i<(n-1);i++) {
       if(((a[i-1])>(a[i]))&&((a[i+1])>(a[i])))
        { printf("Yes"); break;} }
	return 0; }