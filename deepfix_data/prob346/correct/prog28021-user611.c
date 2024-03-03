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
for (int i=0;i<n;i++) {
scanf("%d",&arr[i]);
for (int j=0;j<n;j++) {
count=0;
scanf("%d",&arr[j]);
if(arr[i]==min(arr[i],arr[j]))
count=count + 1; }
arr[i]=s[n-count]; }
for (int j=0;j<n;j++) {
printf("%d ",s[j]); }
printf("end");
    return 0; }