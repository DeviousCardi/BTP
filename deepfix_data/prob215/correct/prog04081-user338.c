#include <stdio.h>
#include <stdlib.h>
int main() {
int n,i,count=0;
int a[count];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&a[i]); }
for(i=0;i<n;i++) {
 if(n%a[i]==0)
count++;
else continue; }
	return 0; }