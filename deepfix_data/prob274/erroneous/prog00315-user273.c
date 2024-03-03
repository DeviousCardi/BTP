#include <stdio.h>
int main(){
    int n;
    int flag=0;
    scanf("%d",&n);
    int room[100];
    room[0]=1;
    for(int i=1;i<n;i++)
    scanf("%d",&room[i]);
    for(int i=0;i<100;i++) {
        room[i]=i;
        for(int j=0;j<100;j++) {
            if(room[i]==room[j])
            flag=1; } }
    if(flag==1) {
        printf("%d",j-i); }
    return 0; }