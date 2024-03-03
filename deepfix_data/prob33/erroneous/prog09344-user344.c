#include <stdio.h>
int hlth(int a, int b){
    if(a>b) return a-b;
    else return 0; }
int main() {
    int h, p, pv=0, i;
    scanf("%d\n", &h);
    scanf("%d\n", &p);
    for(i=0; i<p; i++){
        a=pv;
        scanf("%d", &pv);
        h=h-hlth(pv,a); }
    if(h>0) printf("Yes");
    else printf("No");
    return 0; }