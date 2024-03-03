#include <stdio.h>
#include <stdlib.h>
int main() {
     int n;
     int sum=0;
     scanf("%d",&n);
     int i,j,count=0;
     int arr[1000];
     for(i=0;i<n;i++) {
         scanf("%d",&arr[i]); }
     for(i=0;i<n;i++) {
         for(j=i+1;j<n;j++) {
             if(arr[i]>arr[j]) {
                 count=count+1; } }
         printf("%d\t",count);
         sum=sum+count;
         count=0; }
     printf("\n");
     printf("%d",sum);
	return 0; }