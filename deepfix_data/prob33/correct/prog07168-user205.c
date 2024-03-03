#include <stdio.h>
int main() {
    int h, p;
    scanf("%d%d", &h, &p);
    int frm, to;
    scanf("%d", &frm);
    for(int i=1; i<p; i++) {
        scanf("%d", &to);
        if(to<frm) {
            h = h-(to-frm); }
        frm = to;
        if(h<=0) break; }
    if(h<=0)
        printf("No");
    else
        printf("Yes");
    return 0; }