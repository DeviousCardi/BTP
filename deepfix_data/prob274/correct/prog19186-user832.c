#include <stdio.h>
int main() {
    int n,room=1,time=0;
    int a[100],b[100],c[100];
    scanf("%d\n",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",a+i);
        b[i]=0;
        c[i]=0; }
    while(c[room-1]<1) {
        room=a[room-1];
        time++;
        b[room-1]++;
        if(b[room-1]==1) {
        c[room-1]=time; } }
    printf("%d %d",time,(time-c[room-1]));
    return 0; }