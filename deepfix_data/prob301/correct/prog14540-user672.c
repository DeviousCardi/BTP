#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,b,i,j;
    scanf("\n%d",&n);
    int a[n];
    for(i=0;i<n;i=i+1){
    scanf("%d",&a[i]); }
    for(j=0;j<n;j++){
    if(a[j+1]==a[j]){
      b=a[j]; }
    else{
        if(j==n-1){
            b=0; }
        else {
        continue;} } }
printf("%d",b);
	return 0; }