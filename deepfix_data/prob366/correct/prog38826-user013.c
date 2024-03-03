#include <stdio.h>
int main(){
    int n,d;
    int min=200;
    scanf("%d",&n);
    int a[2*n];
    for(int i=0;i<2*n;i++) {
        scanf("%d",&a[2*n]); }
    for(int i=0;i<2*n;i++) {
       for(int j=1;j<2*n;j++) {
           if(a[i]==a[j]) {
               d=j-i; } }
        if(min>d) {
        min=d; } }
    printf("%d",min);
    return 0; }