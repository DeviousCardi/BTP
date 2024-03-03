#include<stdio.h>
#include<strings.h>
void opp(int a[],int i,int j);
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]); }
    opp(arr,0,n-1);
    for(int i=0;i<n;i++) {
      printf("%d",arr[i]); }
    return 0; }
void opp(int a[],int i,int j) {
    if(i==j) return;
    else {
        int temp;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        opp(arr,i+1,j-1); } }