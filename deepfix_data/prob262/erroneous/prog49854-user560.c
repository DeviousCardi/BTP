#include<stdio.h>
#include<strings.h>
#include<stdlib.h>
int reverse(int num[],int size);
int main() {
    int n;
    scanf("%d",&n);
    int i;
    int num[n];
    for(i=0;i<n;i=i+1) {
        scanf("%d",&num[i]); }
    reverse(num[],n);
    for(i=0;i<n;i=i+1) {
        printf("%d",num[i]); }
    return 0; }
int reverse(int num[],int n) {
    int i;
    if(i>n)
    return 0;
    else
    return
    int temp;
    temp=num[0];
    num[0]=num[n-1];
    num[n-1]=temp;
    reverse(num,n-1); }