#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int count=0,countstat=0,k[n];
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j])
            count+=1; }
        countstat=count;
        k[i]=countstat,k[n]=0; }
    printf("%d\n",count);
	for(int i=0;i<n;i++) {
	    printf("%d ",k[i]); }
	return 0; }