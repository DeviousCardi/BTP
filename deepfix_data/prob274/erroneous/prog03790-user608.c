#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[1000];
    b[0]=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<1000;i++) {
      b[i]=p;
      p=a[p-1]; }
    for(int i=0;i<10;i++) {
        printf("%d",b[i]); }
    return 0; }