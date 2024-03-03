#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,j,n,inv=0;
scanf("%d",&n);
int num[n];
int count[n];
for(i=0;i<n;i++) {
    scanf("%d",&num[i]); }
for(i=0;i<n;i++) {
    for(j=i+1;j<n;j++) {
        if(num[i]>num[j])
        inv++;
        count[i]++; } }
printf("%d\n",inv);
for(i=0;i<n;i++) {
    printf("%d ",count[i]); }
	return 0; }