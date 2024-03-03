#include <stdio.h>
int main(){
    int n,peaks;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
      scanf("%d",a+i);
    peaks=0;
    for(int i=1;i<n-1;i++)
       if(a[i-1]<a[i] && a[i+1]<a[i]) {
               peaks++;
               i++; }
    printf("%d",peaks);
    return 0; }