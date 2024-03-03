#include <stdio.h>
int main() {
    int h,p,i;
    scanf("%d %d",&h,&p);
    int hp[p];
    for(i=0;i<p;i++) {
        scanf("%d",&hp[i]); }
    int sum=0;
    i=0;
    while(i<p-1) {
        if(hp[i]>hp[i+1]) {
            sum+=hp[i]-hp[i+1]; }
            if(sum>=h) {
                break; }
        i++; }
    if(i==p-1)
        printf("Yes");
    else
        printf("No");
    return 0; }