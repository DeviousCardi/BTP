#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int array[n];
    int i=0,c=0,d=0;
    char x;
    for(i=0;i<n;i++) {
        scanf("%d",&array[i]);
        scanf("%c",&x); }
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(array[j]==array[i])
            c++; }
        if(c==array[i])
        continue;
        else {
            d=-1;
            break; } }
    if(d==-1)
    printf("No");
    else
    printf("Yes");
    return 0; }