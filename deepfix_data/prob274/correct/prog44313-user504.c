#include <stdio.h>
int main(){
    int n,i;
    int num[100];
    int room[100];
    scanf("%d",&n);
    i=0;
    while(i<n) {
          scanf("%d",&num[i]);
          i++; }
    room[0]=1;
    room[1]=num[0];
    i=2;
    while(i<2*n) {
        room[i]=num[num[i-2]-1];
        i++; }
    i=2;
    while(i<2*n) {
        if(room[1]==room[i]) {
            printf("%d ",i);
            break; }
    i++; }
    return 0; }