#include <stdio.h>
int main() {
    int h;
    int nopf;
    scanf("%d/n",&h);
    scanf("%d/n",&nopf);
    int p[nopf];
    int i;
    for(i=0;i<nopf;i++)
        scanf("%d",&p[i]);
    int reducehealth=0;
    for(i=0;i<nopf;i++) {
        if(p[i]>p[i+1]) {
            reducehealth=reducehealth+(p[i]-p[i+1]); }
        else
            continue;
            printf("%d ",reducehealth); }
    if(h>reducehealth)
        printf("Yes");
    else
        printf("No");
    return 0; }