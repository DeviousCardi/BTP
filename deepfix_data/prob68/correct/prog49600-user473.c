#include<stdio.h>
float prod(int a[],int size){
    if(size==1) {
        printf("%d",a[0]);
        return a[0]; }
    if(size>1) {
        int c,n,i;
        c=a[n-i]*prod(a[n-(i+1)],size-(i+1));
        printf("%d",c);
        return c; } }
int main() {
    return 0; }