#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int count=0,k[n];
    for(int i=0;i<n-1;i++) {
        int countstat=0;
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]){
            count+=1;
            countstat+=1; } }
        k[i]=countstat; }
    printf("%d\n",count);
	for(int i=0;i<n-1;i++) {
	    printf("%d ",k[i]); }
	printf("0");
	return 0; }