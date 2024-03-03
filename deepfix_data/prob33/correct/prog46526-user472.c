#include <stdio.h>
int main() {
    int h;
    scanf("%d",&h);
    int p;
    scanf("%d",&p);
    int a;
    scanf("%d",&a);
    int l=a;
    for(int i=1;i<p;i++) {
        scanf("%d",&a);
        if(a<l) {
            h=h-(l-a); }
        l=a; }
    if(h>0) {
        printf("Yes"); }
    else {
        printf("No"); }
    return 0; }