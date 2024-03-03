#include <stdio.h>
int main() {
    int h,p,i,h1,h2,health;
    scanf("%d",&h);
    scanf("%d",&p);
    for(i=1;i<p;i++) {
        scanf("%d",&h1);
        scanf("%d",&h2);
         if(h2>h1) {
             health =h;
             break; }
         else {
             health =h2-h1; }
          h1=h2; }
    if(health==0) {
         printf("No"); }
    else {
         printf("Yes"); }
    return 0; }