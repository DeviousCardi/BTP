#include <stdio.h>
int arr[100];
int n;
int getMaxLessThan(int upperLimit) {
    int max=arr[0],r=0;
    int i,j;
   for ( i=0;i<upperLimit;i++){
       for ( j=0;j<n;j++){
           if (max<arr[j]){
               max=arr[j];
                r=j; } }
       arr[r]=0;
       printf("%d\n",max);
       max=0; }
 return r; }
int main() {
    int i,k;
    scanf("%d%d",&n,&k);
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]); }
        getMaxLessThan(k);
    return 0; }