#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,i,j;
    int sum=0;
    scanf("%d\n",&n);
    int a[n];
    int count[n];
    for(i=0;i<n;i++) {
        scanf("%d",a[i]); }
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                 count[i]++; } } }
    for(i=0;i<n;i++)
    sum=sum+a[i];
    printf("%d\n",sum);
    for(i=0;i<n;i++) {
        printf("%d ",count[i]); }
	return 0; }