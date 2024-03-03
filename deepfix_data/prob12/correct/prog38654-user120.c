#include <stdio.h>
int main(){
    int n,min=0,t;
      int p=2*n;
    int a[p];
    scanf("%d",&n);
    for(int i=0;i<p;i++) {
        scanf("%d",&a[i]); }
    for(int i=0;i<p-1;i++) {
        for(int j=i+1;j<p;j++) {
            if(a[j]==a[i])
            t=j;
            if(min<t) {
                min=t; } } }
    printf("%d",min);
    return 0; }