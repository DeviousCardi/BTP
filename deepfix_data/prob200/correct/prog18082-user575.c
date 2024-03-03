#include <stdio.h>
int arr[100]={0};
int n;
int getmaxlessthan(int upperLimit) {
    int i,b[10]={0};
    for(i=0;i<10;i++) {
        if((upperLimit-arr[i])>0)
            b[i]=upperLimit-arr[i];
            printf("%d",b[i]); } }
int main() {
  getmaxlessthan(11);
    return 0; }