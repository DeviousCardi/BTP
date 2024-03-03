#include <stdio.h>
int main() {
    int n,i,m;
    scanf("%d\n",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
    void sort(int a[],int n,int index);
    sort(a,n,0);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0; }
void sort(int a[],int n,int index) {
    if(index==n)
    return;
    int i,max,t,j;
    max=a[index];
    j=index;
    for(i=index;i<n;i++) {
        if(a[i]>max){
        max=a[i];
        j=i; } }
    t=a[index];
    a[index]=max;
    a[j]=t;
    sort(a,n,index+1); }