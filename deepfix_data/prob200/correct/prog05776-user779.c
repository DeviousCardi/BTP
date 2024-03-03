#include <stdio.h>
int a[100];
int n,i,k,c;
int swap(int a,int b){
c=a;
a=b;
b=c;
return 1; }
int main() {
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]>a[i+1]){}
        else swap(a[i],a[i+1]); }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
return 0; }