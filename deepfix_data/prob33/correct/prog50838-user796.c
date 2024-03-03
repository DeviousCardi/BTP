#include <stdio.h>
int main() {
int n,i,j,k,s;
scanf("%d",&n);
scanf("%d",&k);
int a[100];
for(i=0;i<k;i++)
scanf("%d",&a[i]);
s=0;
for(i=0;i<k;i++) {
    if(a[i]>a[i+1]){
       j=a[i]-a[i+1];
       s=s+j; }
    if(a[i]<a[i+1]){
        continue; } }
    if(s>=n){
        printf("yes"); }
    else{printf("no");}
    return 0; }