#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i;
    scanf("%d",&n);
    int a[10000];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int max[10000];
    for(i=0;i<n;i++) {
        max[i]=0; }
    int mode[10000];
    for(i=0;i<n;i++) {
        if(a[i+1]==a[i]) {
            max[i]=max[i]+1;
            mode[i]=a[i]; }
	return 0; }