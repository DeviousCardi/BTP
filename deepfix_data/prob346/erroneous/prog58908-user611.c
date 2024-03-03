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
scanf("%d",&a[0]);
for(int j=0;j<n;j++) {
c=a[0];
for (int=1;i<n;i++)
{scanf("%d",&a[i]);
c=min(c,a[i]); }
for (int k=0;k<n;k++) {
if(a[k]==c) {
printf("%d ",a[k]);
a[k]=100;
break; } } }
printf("end");
    return 0; }