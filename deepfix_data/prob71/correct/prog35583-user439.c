#include<stdio.h>
int maxelement(int a[],int start,int end) {
    int max=a[start];
    int index=start;
    for(int i=start;i<end;i++) {
        if (a[i]>max)
        {max=a[i];
        index=i;} }
    return index; }
void sort(int a[],int start,int end) {
    if (start>=end)
    return;
    else {
    int max= maxelement(a,start,end);
    int t=a[max];
    a[max]=a[start];
    a[start]=t;
    sort(a,start+1,end); } }
int main() {
    int a[1000],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    sort(a,0,n);
    for(int i=0;i<n;i++) {
        printf("%d ",a[i]); } }