#include <stdio.h>
int main() {
int a;
int c=0;
scanf("%d",&a);
int arr[a];
for (int i=0;i<a;i++)
scanf("%d",&arr[i]);
for (int j=0;j<a;j++) {
for (int k=0;k<a;k++) {
if(arr[j]==arr[k])
c=c+1; } }
if(c==a)
printf("NO");
else
printf("YES");
	return 0; }