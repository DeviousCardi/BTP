#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,t;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++) {
    scanf("%d",&arr[i]); }
scanf("%d",&t);
int a[t];
for(i=0;i<t;i++) {
    scanf("%d",&a[i]); }
for(i=0;i<t;i++) {
   if((arr[a[i]]>arr[a[i]-1])&&(arr[a[i]]>arr[a[i]+1]))
    printf("Yes");
    else
    printf("No";) }
	return 0; }