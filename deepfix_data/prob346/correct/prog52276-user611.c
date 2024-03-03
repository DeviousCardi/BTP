#include <stdio.h>
int min(int a, int b) {
if(a<b)
return a;
else
return b; }
int main(){
int n,count,a,b,c;
scanf("%d",&n);
int arr[n],s[n];
count=0;
for (int i=0;i<n;i++) {
scanf("%d",&arr[i]);
for (int j=0;j<n;j++) {
scanf("%d",&arr[j]);
if(arr[i]<arr[j])
count=count + 1; }
s[n-count]==arr[i];
count==0; }
for (int j=0;j<n;j++) {
printf("%d ",s[j]); }
printf("end");
    return 0; }