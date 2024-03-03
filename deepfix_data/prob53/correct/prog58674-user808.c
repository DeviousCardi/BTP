#include<stdio.h>
int subtraction(int n){
    int i,x;
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); }
    x=a[0];
    for(i=1;i<n;i++){
        x=(x-a[1]); }
    return x; }
 int main(){
     int n;
     scanf("%d",&n);
     printf("%d",subtraction(n));
     return 0; }