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
int arr[n],s[n];
int c,d,e,f;
scanf("%d",&arr[0]);
c=arr[0];
for (int i=1;i<n;i++) {
scanf("%d",&arr[i]);
c=max(c,arr[i]); }
for (int i=1;i<n;i++) {
scanf("%d",&arr[i]);
d=min(d,arr[i]); }
for(int j=0;j<n;j++) {
s[j] = arr[j];
if (arr[j]==c) {
s[j]==d;
printf("%d",s[j]); }
else if(arr[j]==d) {
s[j]=c;
printf("%d",s[j]); }
else
printf("%d ",s[j]); }
printf("end");
return 0; }