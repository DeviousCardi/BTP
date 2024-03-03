#include <stdio.h>
int main() {
    int p,hp[100],h,i;
    scanf("%d\n",&h);
    scanf("%d\n",&p);
    for(i=0;i<p;i++) {
        scanf("%d ",&hp[i]); }
    for(i=0;i<p-1;i++) {
        if(hp[i]>hp[i+1]) {
            h=h-(hp[i]-hp[i+1]); }
        else
        continue; }
    if(h>0) {
        printf("Yes"); }
     else
       printf("No");
    return 0; }