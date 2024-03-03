#include <stdio.h>
int arr[100]={0};
int n,k;
int getmaxlessthan(int upperlimit) {
    int i,b[100]={0},m;
    for(i=0;i<n;i++) {
        if((upperlimit-arr[i])>0)
            b[i]=upperlimit-arr[i]; }
    m=b[0];
    for(i=0;i<100;i++) {
        if(b[i]<m)
            m=b[i]; }
    for(i=0;i<n;i++) {
        if(b[i]==m)
            return arr[i];
            else
                return 0; } }
int main() {
    int i,m,count=0,p;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]); }
    m=arr[0];
    for(i=0;i<n;i++) {
        if(arr[i]>m)
            m=arr[i]; }
    p=getmaxlessthan(m);
    for(i=0;i<k;i++) {
       p=getmaxlessthan(p);
       printf("%d",p); }
    return 0; }