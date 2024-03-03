#include <stdio.h>
#include <stdlib.h>
int main() {
     int arr[10000],n,i,k=0,j, sum, a[10000], b[10000];
     scanf("%d", &n)
     for(i=0; i<n; i++) {
         scanf("%d", &arr[i]); }
     scanf("%d", &sum);
     for(i=0; i<n; i++)
     for(j=i; j<n; j++)
     if(sum==arr[i]+arr[j]) {
         a[k]==arr[i];
         b[k]==arr[j];
         k++; }
     for(i=0; i<=k; i++)
     printf("(%d,%d)\n", a[i], b[i]);
 	return 0; }