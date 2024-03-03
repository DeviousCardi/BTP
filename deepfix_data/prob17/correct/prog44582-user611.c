#include <stdio.h>
int main() {
int a,b;
int c=0;
int d=0;
scanf("%d",&a);
int arr1[a];
for(int i=0;i<a;i++)
scanf("%d",&arr1[i]);
scanf("%d",&b);
int arr2[b];
for(int j=0;j<b;j++)
scanf("%d",&arr2[j]);
for (int i=0;i<b;i++) {
for (int j=0;j<a;j++) {
if(arr2[i]==arr1[j]) {
for (int k=1;k<b;k++) {
c=(arr2[i+k]==arr1[j+k]); }
if(c==b-1) printf("YES");
else printf("NO");
return 0; } } }
return 0; }