#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int wth[n]
    int i,cnt,dnt;
    int min,max,mini,maxi;
    int t;
    for(i=0;i<n;i++) {
        scanf("%d",arr[i]); }
    for(cnt=0;cnt<n;cnt++) {
        for(dnt=0;dnt<n;dnt++) {
            if(wth[cnt]>wth[dnt])
            break; }
        if(dnt==n) {
            min=wth[cnt];
            mini=cnt; } }
    for(cnt=0;cnt<n;cnt++) {
        for(dnt=0;dnt<n;dnt++) {
            if(wth[cnt]<wth[dnt])
            break; }
        if(dnt==n) {
            max=wth[cnt];
            maxi=cnt; } }
    t=min;
    wth[maxi]=t;
    wth[mini]=min;
    for(i=0;i<n;i++)
    printf("%d",wth[i]);
    printf("\n");
    printf("end");
    return 0; }