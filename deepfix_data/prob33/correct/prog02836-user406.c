#include <stdio.h>
int main() {
    int h;
    int nopf;
    scanf("%d",&h);
    scanf("%d",nopf);
    int p[nopf];
    int i;
    int reducehealth=0;
    for(i=0;i<nopf;i++)
        scanf("%d",&p[i]);
    for(i=0;i<nopf;i++) {
        if(p[i]>p[i+1]) {
            reducehealth=reducehealth+(p[i]-p[i+1]); }
        else
            continue; }
    if(h>reducehealth)
        printf("Yes");
    else
        printf("No");
    return 0; }