#include <stdio.h>
int occur(int i,int arr[],int n);
int main() {
    int n ;
  scanf("%d",&n);
  int arr[n];
 int i,a,count=0;
  for(i=0;i<n;i++) {
        scanf("%d,",&arr[i]); }
    for(i=0;i<n;i++) {
        a=occur(i,arr[n],n);
            if(a==0)
        {   count++;
            printf("no");
            break; } }
    if(count==0)
    printf("yes");
    return 0; }
    int occur(int k,int arr[],int i) {
        int j,count=0;
        for(j=0;j<i;j++) {
            if(arr[j]==k)
            count++; }
        if(count!=k)
       return 0;
       else
       return 1; }