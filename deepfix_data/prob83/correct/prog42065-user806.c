#include <stdio.h>
void swap(int ar[],int size){
    for(int i=size-1;i>=0;i--){
        int temp=ar[i];
        ar[i]=ar[(i+1)%size];
        ar[(i+1)%size]=temp; } }
int main() {
    int d,n,i,j,k,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    for(j=1;j<=d;j++){
        swap(a,n); }
    for(i=0;i<n;i++){
        printf("%d ",a[i]); }
    return 0; }