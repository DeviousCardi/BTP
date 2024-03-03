#include<stdio.h>
int sum(float arr[],int,int);
int main() {
    int n;
    scanf("%f",&n);
    float a[n];
    for(int i=0;i<n;i++)
    scanf("%f",&a[i]);
    float d=sum(a,0,n);
    printf("%.0f",d);
    return 0;}
    int sum(float arr[],int k,int n) {
        float s=0;
        if(k==n)
        return s;
        s=arr[k]+sum(arr,k+1,n);
        return s; }