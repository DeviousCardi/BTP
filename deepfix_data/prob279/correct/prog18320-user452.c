#include <stdio.h>
int main() {
    int n,i,j,k;
    scanf("%d",&n);
    int a[n];
    int sum=0;
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum=sum+a[i]; }
int flag=0;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]==a[j]){
            k=a[i];
            flag=1; } }
    if(flag==1)
      break; }
printf("%d/n",k);
int sum1=((n)*(n+1))/2;
int sum2=sum-k;
int num=sum1-sum2;
printf("%d",num);
    return 0; }