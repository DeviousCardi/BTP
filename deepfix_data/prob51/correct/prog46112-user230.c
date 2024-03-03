#include <stdio.h>
void swap(int m,int n,int a[]) {
    int temp;
    temp=a[n];
    a[n]=a[m];
    a[m]=temp; }
int max(int a[],int start,int size) {
    int m=0,index;
    for(int i=start;i<size;i++) {
        if(m<a[i]) {
            m=a[i];
            index=i; } }
    return index; }
int sort(int a[],int size,int start,int k) {
    if(start==k) {
        return 0; }
    int r;
    r=max(a,start,size);
    swap(start,r,a);
    return sort(a,size,start+1,k); }
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int chair[n];
    for(int i=0;i<n;i++)
        scanf("%d",&chair[i]);
   int x= sort(chair,n,0,k);
    printf("\n%d",chair[k-1]);
    return 0; }