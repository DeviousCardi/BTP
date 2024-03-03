#include<stdio.h>
#include<strings.h>
int n;
void rev(int a[],int index) {
    if (index==n/2)return;
    int temp=a[index];
    a[index]=a[n-1-index];
    a[n-1-index]=temp;
    rev(a,index+1); }
int main() {
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)scanf("%d",&a[i]);
    rev(a,0);
    for(int i=0;i<n;++i)printf("%d",a[i]);
    return 0; }