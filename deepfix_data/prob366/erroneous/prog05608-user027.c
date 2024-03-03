#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int ch[2*n];
    scanf("%d",&ch);
    int  l[n];
    for(int i=0;i<n;i=i+1) {
        int ab=a[i];
        for(int j=0;j<n;j=j+1) {
            if(ab==a[n+j]) {
                l[i]=n+j+1-i; } } }
    int m=0;
    for(int i=0;i<n;i=i+1) {
        if(l[i]>l[i+1])
       { l[i+1]=l[i];
        m=l[i+1];}
        else{
            m=l[i+1]; } }
    return 0; }