#include<stdio.h>
void func(int a[],int size) {
    int i,j,count=1,temp=0;
    for(i=0;i<size;i++) {
        for(j=i+1;j<n;j++) {
            if(a[i]<a[j]) {
               count++; } }
        if(count>temp)
        temp=count; }
    printf("%d",temp); }
int main() {
    return 0; }