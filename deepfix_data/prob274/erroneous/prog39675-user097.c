#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    int room[n+1];
    room[0]=0;
    arr[0]=0;
    int l=0;
    int m=0;
    int i=3;
    int q;
    for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]); }
    room[1]=arr[1];
    for(int j=2;j<=n;j++) {
        room[j]=arr[room[j-1]]; }
   for(int i=1;i<=n:i++) {
       for(int j=i+1;j<=n;j++) {
           if(room[i]==room[j])
           {   q=-1
               l=i;
               m=j;
               break; } }
       if(q==-1) {
           break; } }
    printf("%d %d",l+m-1,m-l);
    return 0; }