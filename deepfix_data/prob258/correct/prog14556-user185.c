#include <stdio.h>
#include <stdlib.h>
int main() {
 int i,n,f=0;
 scanf("%d",&n);
 int arr[n];
 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);
 if(n==1)
 {f=1;
     printf("Yes"); }
 else {
 for(i=0;i<n;i++) {
  if(i==0) {
  if(arr[i]>arr[i+1])
  {printf("Yes");
  f=1;
  break;} }
else if(i==(n-1)) {
    if(arr[n-1]>arr[n-2])
    {printf("Yes");
    f=1;
  break;} }
else if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1]))
{printf("Yes");
f=1;
break;}
 }}
 if(f==0)
 printf("No");
	return 0; }