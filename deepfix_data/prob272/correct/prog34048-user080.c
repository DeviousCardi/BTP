#include<stdio.h>
int main() {
    int t,a,i,value;
    scanf("%d",&a);
    for(i=1;i=i+1;i<a) {
        scanf("%d",&value);
        if(value<2) {
        continue; }
    t=t+value-2;
    printf("%d",t); }
    return 0; }