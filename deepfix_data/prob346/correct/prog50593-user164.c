#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    int arr[t];
    int incnt,cnt,dnt,min;
    int ont=0,lnt,tcnt;
    int a,tsnt;
    a=t;
    int tarr[a];
    for(incnt=0;incnt<t;incnt++) {
        scanf("%d",&arr[incnt]); }
    for(cnt=0;cnt<t;cnt++) {
        for(dnt=0;dnt<t;dnt++) {
            if(arr[dnt]<arr[cnt]) {
                break; } }
        if(dnt==t) {
            tarr[ont]=arr[cnt];
            ont++;
            for(tcnt=cnt;tcnt<t;tcnt++) {
            arr[tcnt]=arr[tcnt+1]; }
            t=t-1;
            cnt=-1; } }
    for(lnt=0;lnt<a;lnt++) {
        printf(" \n %d \n",tarr[lnt]); }
    printf("end");
    return 0; }