#include<stdio.h>
int main() {
    int n,i,j,max;
    int a[20];
    for(i=0;i<n;i++) {
        scanf("%d ",&a[i]); }
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            if(a[i]<a[j]) {
                count=count+1; } }
      if(count>max){max=count;} }
    printf("%d",max);
    return 0; }