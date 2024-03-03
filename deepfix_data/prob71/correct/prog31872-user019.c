#include <stdio.h>
int main() {
    int n,i;
    float m;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    void sort(int a[],int n,int index);
    sort(a,n,0);
    if(n%2==0){
        m=(a[n/2]+a[n/2-1])/(2.0);
        printf("%0.1f",m); }
    else{
    m=a[n/2];
    printf("%0.0f",m); }
    return 0; }
void sort(int a[],int n,int index) {
    if(index==n)
    return;
    int i,min,t,j;
    min=a[index];
    j=index;
    for(i=index;i<n;i++) {
        if(a[i]<min){
        min=a[i];
        j=i; } }
    t=a[index];
    a[index]=min;
    a[j]=t;
    sort(a,n,index+1); }