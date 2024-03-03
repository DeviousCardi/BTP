#include <stdio.h>
int main(){
    int n,room[100],frequency[100],count=0;
    int t=0,k=0,x=1,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&room[i]);
        frequency[i]=0; }
    frequency[0]=1;
    while(count>=0) {
        count++
        x=room[x-1];
        frequency[x-1]++;
        if(frequency[x-1]==2 && flag==0) {
            t=count;
            flag=1; }
        if(frequency[x-1]==3) {
            k=count-t;
            break; } }
    printf("%d %d",t,k);
    return 0; }