#include <stdio.h>
int min(int a, int b) {
if(a<b)
return a;
else
return b; }
int main(){
int n;
scanf("%d",&n);
int arr[100],s[100];
int a,b,c,d,e;
for (int f=0;f<n;f++) {
for (int i=0;i<n;i++) {
scanf("%d",arr[i]);
a=arr[i]; }
c=arr[0];
for (int j=1;j<n;j++) {
c=min(c,arr[j]); }
for (int k=0;k<n;k++) {
if (arr[k]==c) {
printf("%d",arr[k]);
arr[k]=100;
break; } } }
printf("end");
    return 0; }