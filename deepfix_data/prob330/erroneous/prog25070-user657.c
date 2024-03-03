#include <stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++){
    scanf("%d",a[n]); }
 int count=0;
for(j=0;j<n-2;j++){
    if((a[j]<a[j+1])&&(a[j+1]>a[j+2])){
        count++ } }
printf("%d",count);
    return 0; }