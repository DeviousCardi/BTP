#include <stdio.h>
int main() {
    int n, input, out=1;
    scanf("%d", &n);
    int count[n];
    for(int i=0;i<n;i++)
        count[i]=-1;
    scanf("%d", &input);
    for (int i=0;i<n;i++) {
        scanf("%d,", &input);
        if(input>n) {
            out=0;
            break; }
        else if(count[input]==-1) {
            if(count[input]>n-i) {
                out=0;
                break; }
            else
                count[input]=input; }
        count[input]--;
        if(count[input]==-1) {
            out=0;
            break; } }
    printf("%d", out);
    return 0; }