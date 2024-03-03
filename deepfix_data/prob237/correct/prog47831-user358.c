#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{    int c=0;
for(int i=l;i<r;i++) {
    for(int j=i;j<r;j++) {
        if(arr[i]>arr[j])
        c++; }
    return c; } }
int main() {
    int n,k;
    scanf("%d ",&n,&k);
    for(int i=0;i<100;i++) {
        scanf("%d ",&arr[i]); }
    return 0; }