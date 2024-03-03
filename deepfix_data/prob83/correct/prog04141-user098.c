#include <stdio.h>
void rot(int b[],int no,int d1) {
    int m=d1;
    int n1=m;
    if(n1>=no) {
            n1=n1-no; }
    int t=b[0];
    int i=n1;
    while(i!=0) {
        int p=b[n1];
        b[n1]=t;
        i=n1;
        n1=n1+m;
        if(n1>=no) {
            n1=n1-no; }
        t=p; } }
int main() {
    int n,d;
    int a[1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    scanf("%d",&d);
    rot(a,n,d);
    for(int i=0;i<n;i++) {
        printf("%d",a[i]); }
    return 0; }