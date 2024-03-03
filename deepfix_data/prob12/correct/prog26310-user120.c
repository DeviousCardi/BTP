#include <stdio.h>
int main(){
    int n,min=200;
      int p=2*n;
    int a[p];
    scanf("%d",&n);
    for(int i=0;i<p;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<p-1;i++) {
        for(int j=i+1;j<p;j++) {
            if((a[i]==a[j])&&min>(j-i))
             min=j-i; } }
    printf("%d",min);
    return 0; }