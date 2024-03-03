#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int sum=0;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i]; }
printf("%d",sum);
int flag=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            flag=1; } }
    if(flag==1)
      break; }
    return 0; }