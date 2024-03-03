#include <stdio.h>
int main(){
    int n,flag=1,count=0,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    int b[100];
    b[0]=1;
    b[1]=a[0];
    for(int i=2;i<100;i++){
        b[i]=a[b[i-1]-1]; }
    for(int i=0;i<11;i++)
    printf("%d  ",b[i]);
    return 0; }