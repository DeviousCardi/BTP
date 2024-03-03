#include <stdio.h>
int i;
void swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp; }
int main() {
    int n,d;
    scanf("%d",&n);
    int num[n];
    int i;
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    scanf("%d",&d);
    int j;
    for(j=1;j<d;j=j+1) {
    for(i=0;i<n;i=i+1) {
      swap(num[i],num[i+1]); }
    printf("%d\n",&num[i]); }
    for(i=0;i<n;i=i+1) {
        printf("%d",num[i]); }
    return 0; }