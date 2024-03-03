#include <stdio.h>
int max(int a, int b) {
if(a>b)
return a;
else
return b; }
int min(int a, int b) {
if(a<b)
return a;
else
return b; }
int main() {
int n;
scanf("%d",&n);
int arr[n];
int c,d;
scanf("%d",&arr[0]);
c= d =arr[0];
for (int i=1;i<n;i++) {
scanf("%d",&arr[i]);
c=max(c,arr[i]); }
for (int i=1;i<n;i++) {
d=min(d,arr[i]); }
for(int j=0;j<n;j++) {
if (arr[j]==c) {
printf("%d ",d); }
else if(arr[j]==d) {
printf("%d ",c); }
else {
printf("%d ",arr[j]); } }
printf("end");
return 0; }