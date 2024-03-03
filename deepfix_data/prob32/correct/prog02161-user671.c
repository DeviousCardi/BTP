#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i;
scanf("%d",&n);
int num[n];
for(i=0;i<n;i++){
    scanf("%d",&num[i]); }
if((num[i]<num[i+1])&&(num[i]<num[i-1])){
    printf("Yes"); }
else {
    printf("No"); }
	return 0; }