#include <stdio.h>
void sort(int a[1000],int start,int end) {
    int i,max;
    max=a[start];
    if (start==end-1)
    return;
    for(i=start+1;i<end;i=i+1) {
        if (a[i]>max) {
            a[start]=a[i];
            a[i]=max;
            max=a[start]; } }
    sort(a,start+1,end);
    return; }
int main() {
    int n,i,a[1000];
    scanf("%d",&n);
    for (i=0;i<n;i=i+1)
    scanf ("%d",&a[i]);
    sort(a,0,n);
    for (i=0;i<n;i=i+1)
    printf ("%d ",a[i]);
    if(n%2!=0)
    printf("%d",a[n/2]);
    else
    printf ("%.1f",(a[n/2-1]+a[n/2])/2.0);
    return 0; }