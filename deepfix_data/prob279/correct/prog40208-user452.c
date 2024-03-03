#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int sum=0;
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
printf("%d",sum);
int flag=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            flag=1; } }
    if(flag==1)
      break; }
int sum1=(n/2)*(n+1);
int sum2=sum-a[i];
int num=sum1-sum2;
printf("%d",num);
    return 0; }