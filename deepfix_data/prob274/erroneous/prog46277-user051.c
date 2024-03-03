#include <stdio.h>
int main(){
    int n,room_no[100],i,t,k,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&room_no[i]);
    arr[0]=1;
    arr[1]=room_no[1];
    for(i=1;i<100;i++) {
        arr[i+1]=room_no[room_no[(i-1)%n]]; }
    t=1;
    for(j=1;;j++) {
        for(i=j+1;;j++) {
            if(arr[i]==arr[j])
                break;
            t=t+1; } }
    printf("%d %d",t,k);
    return 0; }