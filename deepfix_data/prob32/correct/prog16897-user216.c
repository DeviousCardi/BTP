#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<=n-1;i++){
    scanf("%d",&a[i]); }
for(i=1;i<=n-2;i++){
    if(a[i]<=a[i-1]&&a[i]<=a[i+1]){
        printf("yes");
        break;} }
    printf("no");
	return 0; }