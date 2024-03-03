#include <stdio.h>
int sum(int a[],int n,int start,int s) {
    if(s==a[start]) {
        return 1; }
    s=s-a[start];
    for(int i=start+1;i<n-1;i++) {
        sum(a,n-1,start+i,s); }
    return 0; }
int main() {
    int n,s,a[30],i;
    scanf("%d %d",&n,&s);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }int k=0;
    for(i=0;i<n;i++) {
        int temp=a[i];
        a[i]=a[0];
        a[0]=temp;
        k=sum(a,n,0,s);
        if(k==1) {
            break; }
        temp=a[i];
        a[i]=a[0];
        a[0]=temp; }
    if(k==0)
    printf("NO");
    if(k==1) {
        printf("YES"); }
    return 0; }