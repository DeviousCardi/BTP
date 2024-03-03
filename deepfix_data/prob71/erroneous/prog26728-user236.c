#include <stdio.h>
void sort(int a[],int start,int end){
        if (start==end){
                return; }
        int x;
        int c=a[start];
        for(int i=start;i<=(end-start);i++){
                if (a[i]<=c){
                        a[i]=c;
                        x=i; } }
        int temp=a[x];
        a[x]=a[start];
        a[start]=temp;
        sort(a,start+1,end); }
int main() {
    int n;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d",&a[i]); }
    sort(a,0,n);
    if (n%2==1){
            printf("%d",a[n/2+1]); }
    if (n%2==0){
            float b=(a[n/2-1]+a[n/2+1])/2.0 ;
            printf("%f",c); }
    return 0; }