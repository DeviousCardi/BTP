#include <stdio.h>
int main(){
    int i,j;
    float x,y,z;
    int a[2],b[2];
    for(i=0;i<2;i++)
    scanf("%d",&a[i]);
    for(i=0;i<2;i++)
    scanf("%d",&b[i]);
    y=b[1]-a[1];
    x=b[0]-a[0];
    if(x==0)
    printf("inf");
    else {
        z=(y/x);
        printf("%.2f",z); }
    return 0; }