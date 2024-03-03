#include<stdio.h>
int arr[100],count=0;
int getInversions(int l,int r)
{    for(int i=l;i<l+r-r;i++){
        for(int j=i+1;j<l+r-1;j++){
            if(arr[j] <arr[i]){
                count=count+1; } } } }
int main() {
    return 0; }