#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{  int max,i,j,inv=0;
for(i=l;i<r;i++) {
    max=arr[i];
    for(j=i+1;j<r;j++) {
        if(max>arr[j])
        inv++; } }
return inv; }
int main() {
    return 0; }