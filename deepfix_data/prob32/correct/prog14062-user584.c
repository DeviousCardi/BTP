#include <stdio.h>
#include <stdlib.h>
int main() {
	int n,i;
    int a[20];
scanf("%d",&n);
	for(i=0;i<n;i=i+1) {
	scanf("%d",&a[i]); }
	for(i=0;i<n;i=i+1) {
    if(a[i]<a[i+1]&&a[i]<a[i-1]){
	 printf("Yes\n");
break; }
    else{
	 printf("No\n");
        break; } }
	return 0; }