#include<stdio.h>
int max(int x,int y) {
    if(x>=y)
    return x;
    else
    return y; }
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l[n];
    int Maxtill[n];
    for(int i=0;i<n;i++) {
        Maxtill[i]=1;
        for(int j=0;j<i;j++) {
            if(a[i]>a[j])
            Maxtill[i] =max(max(1+Maxtill[j],1),Maxtill[i]); } }
    printf("%d",Maxtill[n-1]);
    return 0; }