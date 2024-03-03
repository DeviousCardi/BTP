#include<stdio.h>
float maxelement(float a[],int start,int end) {
    float max=a[start];
    int index=start;
    for(int i=start;i<end;i++) {
        if (a[i]>max)
        {max=a[i];
        index=i;} }
    return index; }
void sort(float a[],int start,int end) {
    if (start>=end)
    return;
    else {
    int max= maxelement(a,start,end);
    float t=a[max];
    a[max]=a[start];
    a[start]=t;
    sort(a,start+1,end); } }
int main() {
    float a[1000];int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%f",&a[i]); }
    sort(a,0,n);
    if(n%2!=0)
    printf("%.0f",a[(n-1)/2]);
    else
    printf("%.1f",0.5*(a[n/2]+a[n/2 - 1])); }