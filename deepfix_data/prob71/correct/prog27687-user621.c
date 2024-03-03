#include <stdio.h>
void swap(float a[],int ind,int start) {
    float temp;
    temp=a[ind];
    a[ind]=a[start];
    a[start]=temp; }
void arrange(float a[],int start,int end) {
    for(int i=start;i<end;i++) {
        if(a[start]<a[i])
        swap(a,i,start); } }
void sort(float a[],int start,int end) {
    if(start<1)
    return;
    sort(a,start+1,end); }
int main() {
    int n;
    scanf("%d",&n);
    float bid[n];
    sort(bid,0,n);
    return 0; }