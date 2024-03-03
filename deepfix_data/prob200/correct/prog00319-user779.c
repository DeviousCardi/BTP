#include <stdio.h>
int a[100];
int n,i,k;
int swap(int a,int b){
    b=a+b;
    a=b-a;
    b=b-a;
return 1; }
int main() {
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){}
        else swap(a[i],a[i+1]); }
    for(i=0;i<n;i++)
    printf("%d",a[i]); }