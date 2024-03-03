#include <stdio.h>
int main(){
    int n,i,j;
    int a[100];
    int b[100];
    int room=1;
    int m,x=0;
    int t=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    b[0]=room;
    for(i=0;i<n;i++){
        room=a[room-1];
        b[i+1]=room; }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(b[i]==b[j]){x++;break;} }
        if(x==1){break;} }
    m=i;
    for(i=m+1;i<n;i++){
        if(b[i]==b[m]){break;} }
    t=i;
    k=t-m;
    printf("%d %d",t,k);
    return 0; }