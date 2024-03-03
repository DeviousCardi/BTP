#include <stdio.h>
int arr[100]={0};
int n;
int getMaxLessThan(int n) {
    int i,temp=0;
    for(i=0;i<n;i++)
    {if(temp<arr[i])
    temp=arr[i];}
    return temp; }
int main() {
    int n,k,temp=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int i;
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }for(i=0;i<n;i++) {
         int temp=getMaxLessThan(n);
         printf("%d "temp);
         if(temp>a[i])
          int temp=getMaxLessThan(n);
         printf("%d",a[i]); }
     printf("%d",temp);
    for(i=0;i<k;i++) {
        printf("%d\n",arr[i]);
        n--; }
    return 0; }