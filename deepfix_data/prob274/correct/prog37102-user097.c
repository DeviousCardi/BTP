#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int room[n];
    room[0]=0;
    arr[0]=0;
    int i=3;
    for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    for(int j=1;j<=n;j++) {
        room[i]=arr[room[i-1]]; }
    while(room[i]!=room[2]) {
        i++; }
    printf("%d %d",i+3,i+2);
    return 0; }