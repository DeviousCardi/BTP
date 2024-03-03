#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,c=0;
scanf("%d\n",&n);
int a[n];
for(i=0;i<n;i++) {
    scanf("%d\n",&a[i]); }
for(i=0;i<n;i++) {
    if(i==0) {
        if(a[i]>a[i+1]) {
            printf("Yes");
            break; }
        else c=c+1; }
     if(i>0 && i<n-1) {
        if(a[i]>a[i+1] && a[i]<a[i-1]) {
            printf("Yes");
            break; }
        else c=c+1; }
     if(i==n-1) {
        if(a[i]>a[i-1]) {
            printf("Yes");
            break; }
        else c=c+1; } }
if(c==n)
printf("No");
	return 0; }