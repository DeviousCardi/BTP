#include <stdio.h>
int main() {
    int n, input, out=1;
    scanf("%d", &n);
    int count[n+1];
    for(int i=0;i<n+1;i++)
        count[i]=-1;
    for (int i=0;i<n;i++) {
        scanf("%d,", &input);
        if(input>n||input<=0) {
            out=0;
            break; }
        else if(count[input]==-1) {
            if(input>n-i-1) {
                out=0;
                break; }
            else
                count[input]=input; }
        count[input]--;
        if(count[input]==-1) {
            out=0;
            break; } }
    if(out)
        printf("Yes");
    else
        printf("No");
    return 0; }