#include <stdio.h>
int main() {
    int n, prev, current, peak_possible=0, peaks=0;
    scanf("%d", &n);
    scanf("%d", &prev);
    for(int i=1;i<n;i++) {
        scanf("%d", &current);
        if(current>prev)
            peak_possible=1;
        else if(current==prev)
            peak_possible=0;
        else {
            if(peak_possible)
                peaks++;
            peak_possible=0; }
        prev=current; }
    printf("%d", peaks);
    return 0; }