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
    if(start>=end)
    return;
    arrange(a,start,end);
    sort(a,start+1,end); }
int main() {
    int n;
    float med=0;
    scanf("%d",&n);
    float bid[n];
    for(int i=0;i<n;i++) {
        scanf("%f",&bid[i]); }
    sort(bid,0,n);
    if(n%2==0) {
        med=(bid[(n-1)/2]+bid[((n-1)/2)+1])/2;
        printf("%.1f ",med); }
    else {
        med=(bid[(n-1)/2]);
        printf("%.1f ",med); }
    for(int i=0;i<n;i++) {
        printf("%f ",bid[i]); }
    return 0; }