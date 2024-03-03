#include <stdio.h>
int main() {
    int p,hp[100],h,i;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    for(i=0;i<p;i++) {
        scanf("%d ",&hp[i]); }
    for(i=0;i<p;i++) {
        if(a[i]>a[i+1]) {
            h=h-(a[i]-a[i-1]); }
        else
        continue; }
    if(h>0) {
        printf("Yes";) }
     else
       printf("No");
    return 0; }