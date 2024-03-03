#include <stdio.h>
#include <stdlib.h>
int main() {
    scanf("%d", &sz1);
    for(c1=0;c1<sz1;c1++) {
        scanf("%d", &a1[c1]); }
    scanf("%d", &sz2);
    for(c2=0;c2<sz2;c2++) {
        scanf("%d", &a2[c2]); }
    for(c3=0;c3<(sz1-sz2);c3++) {
        for(c4=0;c4<sz2;c4++) {
            if(a2[c4]==a1[c3+c4])
            continue;
            else
            break; }
        if(c4==sz2)
        break; }
    if(c4==sz2)
    printf("YES\n");
    else
    printf("NO\n"); }