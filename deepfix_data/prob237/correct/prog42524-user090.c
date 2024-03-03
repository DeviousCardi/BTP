#include<stdio.h>
int arr[100];
int getInversions(int l,int r)
{  int i,j,count=0,a[10000] ;
    for(i=0;i<l+r-2;i++) {
        for(j=i+1;j<l+r-1;j++) {
            if(a[i]>a[j])
            count=count+1 ; } }
    return count ; }
int main() {
    return 0; }