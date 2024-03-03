#include <stdio.h>
#include <stdlib.h>
int main() {
     int n,j,x=0;
     scanf("%d",&n);
     int arr[n];
     int i;
        for(i=0;i<n;i++){
      scanf("%d\n",&arr[i]); }
      for(j=0;j<n;j++) {
       if(arr[j-1]>arr[j]&&arr[j]<arr[j+1])
       x=x+1; }
     if(x>0)
     printf("Yes");
     else
      printf("No");
            return 0; }