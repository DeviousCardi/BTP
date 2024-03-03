#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<=n;i++) {
        for(j=i+1;j<=n;j++) {
            if(a[i]>a[j]) {
                count++; }
            countt=0; } }
    printf("%d\n",count);
    count=0;
    int countt=0;
    for(i=0;i<n;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                count++;
                countt++; }
            printf("%d",countt);
            if(i<n-1){printf(" ");}
            countt=0; } }
	return 0; }