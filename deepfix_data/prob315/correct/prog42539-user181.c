#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",arr[i]);
    int pr=0;
      int count[n];
    for(int j=0;j<n;j++) {
        for(int k=j+1;k<n;k++) {
            if(arr[j]>arr[k])
            count[j]++; }
        pr++; }
    printf("%d",pr);
    for(int l=0;l<n;l++)
    printf("%d",count[l]);
    return 0; }