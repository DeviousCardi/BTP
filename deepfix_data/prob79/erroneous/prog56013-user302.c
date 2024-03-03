#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
scanf("%d\n",&n);
int *a;
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
int count1=0;count2=0;
for(i=0;i<n;i++){
    if(a[i]>=a[l-i-1]&&i!=l-i-1){
    a[i+1]=a[i+1]-a[l-i-1];
    count1++;
    else
    a[l-i-2]=a[l-i-2]-a[i];
    count2++; }
for(i=0;i<n;i++){
    printf("%d",a[i]); }
	return 0; }