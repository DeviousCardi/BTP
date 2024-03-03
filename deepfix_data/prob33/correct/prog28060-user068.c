#include <stdio.h>
int main() {
    int h,p=0,hp[p],diff;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    for(int i=0;i<p;i++)
    scanf("%d",&hp[i]);
    for(int i=0;i<p-1;i++) {
        diff=hp[i+1]-hp[i];
        if(diff<0) {
        h=h-diff;
        printf("%d",h); } }
    if(h>0)
    printf("yes");
    else
    printf("no");
    return 0; }