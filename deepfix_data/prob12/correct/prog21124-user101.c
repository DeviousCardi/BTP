#include <stdio.h>
int main(){
    int i,n,f,s,p,m,j;
    f=-5;
    s=-5;
    scanf("%d",&n);
    p=2*n;
    int a[p];
    for(i=0;i<p;i++){
        scanf("%d",&a[i]); }
    int dist = 2*p +5;
    for(j=0;j<p;j++){
        for(i=0;i<p;i++){
            if((f== -5)&&(a[j]==a[i]))
                f=i;
            else if((s== -5)&&(a[j]==a[i]))
                s=i; }
    if ((s-f)<=dist)
        dist=s-f;
    f=-(5);
    s=-(5); }
    printf("%d",dist);
    return 0; }