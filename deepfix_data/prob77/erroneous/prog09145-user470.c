#include <stdio.h>
int max(int x,int y){
    if(x>y)
    return x;
    else
    return y; }
int min(int x,int y){
    if(x>y)
    return y;
    else
    return x; }
int main() {
    int n,a[1000],i,x,y,w,f,g;
    scanf("%d",&n);
    scanf("%d",&a[0]);
    c=a[0];
    d=a[0];
    for(i=1;i<n;i++){
        scanf("%d",&a[i]);
        c=max(c,a[i]);
        if(c==a[0])
        x=0;
        else
        x=i;
        d=min(d,a[i]);
        if(d==a[0])
        y=0;
        else
        y=i; }
    w=a[x];
    a[x]=a[y];
    a[y]=w;
    for(i=0;i<n;i++){
        printf("%d ",a[i]); }
    printf("end");
    return 0; }