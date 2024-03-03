#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{   int count=0
    for (int i=l;i<=l+r-1;i++){
    for (j=i+1;j<=l+r-1;j++){
        if (arr[i]>arr[j]){
            count=count+1; } } }
return count; }
int main() {
    return 0; }