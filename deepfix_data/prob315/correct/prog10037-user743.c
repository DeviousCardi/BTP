#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,count=0,count1=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++) {
        b[i]=0; }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if((a[i]>a[j])&&i<j) {
            b[i]=b[i]+1;
            count=count+1; } } }
    printf("%d\n",count);
    for(int i=0;i<n;i++) {
        printf("%d ",b[i]); }
	return 0; }