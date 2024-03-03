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
for(int l=0;l<b;l++) {
for (int k=0;k<a;k++) {
if(arr2[l]==arr1[k]) {
c=c+k-l;
break }
else {
continue; } } }
if(c%b==0)
printf("YES");
else
printf("NO");
return 0; }