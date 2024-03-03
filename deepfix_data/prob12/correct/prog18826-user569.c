#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int gates;
    scanf("%d",&gates);
    int G[gates];
    int c = gates;
    while(c>=0) {
        scanf("%d",&G[gates-c]); }
    int i;
    int diff[gates/2];
    int dif=0;
    for(i=0;i<=gates;i++) {
        while (diff[i]<=gates/2)
        for(c=0;c<=gates;c++) {
            if(G[i]==G[c]) {
                diff[dif]=abs(i-c);
                dif++; } } }
    int min;
    min = diff[0];
    for(i=0;i<=gates/2;i++) {
        if(diff[i]<min) {
            min=diff[i]; } }
    printf("%d",min);
    return 0; }