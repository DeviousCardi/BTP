#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ch[2*n];
    int abc;
    for(int i=0;i<2*n;i=i+1) {
        scanf("%d",&abc);
        ch[i]=abc; }
    int  l[n];
    for(int i=0;i<n;i=i+1) {
        int ab=ch[i];
        for(int j=1;j<n;j=j+1) {
            if(ab==ch[n+j]) {
                l[i]=n+j-i; }
            break; } }
    int m=0;
    for(int i=0;i<n;i=i+1) {
        if(l[i]<l[i+1]) {
            l[i+1]=l[i]; }
        m=l[i+1]; }
    printf("%d",m);
    return 0; }