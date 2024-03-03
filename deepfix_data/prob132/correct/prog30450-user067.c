#include <stdio.h>
int main() {
    int i,n,m,j;
   int count=1;
    int arr[i];
    scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d ",&arr[i]); }
    for(i=0;i<n;i++)
    {   for(j=1;j<n-1;j++) {
        if(arr[i]==arr[j])
        count++; } }
    if(count==arr[i]) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }