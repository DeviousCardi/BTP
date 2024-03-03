#include <stdio.h>
int sort(int a[],int k,int n) {
    int i,j,min,temp;
    for(i=0;i<n;i++) {
        min=i;
        for(j=i+1;j<n;j++) {
            if(a[j]<a[min]) {
                min=j;
                j=temp;
                temp=min; } } }
    printf("%d",a[k-1]); }
int main() {
    return 0; }