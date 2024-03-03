#include <stdio.h>
int main(){
    int i,n,s,p,k,r,w;
    s=0;
    scanf("%d",&n);
    for(i=1;i<5;i++) {
        p=n%10;
        k=n/10;
        s=s+p;
        n=k; }
    for(r=0;r<37;r++) {
        w=(2016+r)%s;
        if(w==0) break; }
    printf("%d",2016+r);
    return 0; }