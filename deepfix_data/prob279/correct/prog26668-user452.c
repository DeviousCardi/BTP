#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
for(i=1;i<n;i++){
    scanf("%d",&a[i]);
    scanf(""); }
for(i=0;i<n;i++){
    for(j=i+1;i<n;i++){
        if(a[i]==a[j]){
            printf("%d",a[i]); } } }
    return 0; }