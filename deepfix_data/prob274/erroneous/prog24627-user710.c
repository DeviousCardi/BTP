#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[100];
    int b[100];
    int room=1;
    int t=0,k=0;
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    b[0]=room;
    for(i=0;i<n;i++){
        room=a[room-1];
        b[i+1]=room; }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]==b[j]){x++;break;} }
        if(x==1){break;} }
    for(i=0;i<n;i++)printf("%d  ",b[i]);
    return 0; }