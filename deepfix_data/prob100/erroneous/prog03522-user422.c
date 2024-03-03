#include<stdio.h>
#include<limits.h>
int max(int a,int b){
    if (a>b)
    return a;
    else
    return b; }
int main() {
    int a,b,c,i,j,z;
    scanf("%d",&a);
    scanf("%d",&b);
    int x[a];
    int y[b];
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            scanf("%d",&x[j]); }
         c=x[0];
        for(j=1;j<a;j++){
         c=max(c,x[j]) }
        y[i]=c;
        printf("%d ",y[i]); }
    z=y[0];
    for(i=0;i<b;i++){
        z=max(z,y[i]); }
    printf("%d",z);
    return 0; }