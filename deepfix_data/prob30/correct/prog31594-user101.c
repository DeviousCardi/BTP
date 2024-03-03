#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int upperLimit)
{ int s=0;
int i;
for(i=0;i<n;i++){
    if((s<arr[i])&&(arr[i]<upperLimit))
        s=arr[i]; }
return s; }
int main()
{int k,i,s,p;
s=0;
scanf("%d %d", &n,&k);
for(i=0;i<n;i++){
    scanf("%d ", &arr[i]);
    if(arr[i]>s)
        s=arr[i]; }
printf("%d \n",s);
for(i=0;i<k-1;i++){
    s=getMaxLessThan(s);
    printf("%d \n",s); }
    return 0; }