#include <stdio.h>
int main() {
    int n,i,x,flag1=0,a,b,flag2=0;
    scanf("%d\n",&n);
    int N[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&x);
        N[i]=x; }
    for(i=1;i<=n;i++) {
        flag1=0;
        for(int j=0;j<n;j++) {
            if(i==N[j]) {
                flag1=1; } }
        if(flag1==1) {
            continue; }
        else {
            break; } }
    a=i;
    for(int i=1;i<=n;i++) {
        flag2=0;
        for(int j=0;j<n;j++) {
            if(N[j]==i) {
                flag2=1;
                for(int k=(j+1);k<n;k++) {
                    if(N[k]==i) {
                        flag2=2; } } } }
        if(flag2==2) {
            b=i; }
    }printf("%d ",b);
    printf("%d\n%d",b,a);
    return 0; }