#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d,",&n);
    int a[n];
for(i=0;i<n;i++){
    scanf("%d",&a[i]); }
int count=0;
int sum=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(a[i]==a[j]){
            count=count+1; }
    }  if(count==a[i]){
        sum=sum+1;} }
if(sum==n){
    printf("Yes");
}else{
    printf("No"); }
    return 0; }