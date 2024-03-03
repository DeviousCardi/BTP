#include <stdio.h>
int main(){
    int n;
    int i;
    int a[50];
    scanf("%d",&n);
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]); }
    int t=0;
    int m;
    i=0;
    int j=1;
    int x=0;
    int b[1000];
    b[0]=1;
    while (i<n) {
        b[j]=a[x];
        x=a[x];
        j++; }
    int k;
    int temp;
    int l;
    for(k=0;k<j;k++) {
        temp=b[k];
        for (l=0;l<k;l++) {
            if (temp==b[l]) {
                t=k+1;
                break; } }
        if(t!=0) break; }
    int count=0;
    for (i=k+1;i<j;i++) {
        count++;
        if(b[k]==b[i]) {
            m=count; } }
    return 0; }