#include <stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[100];
    int b[100];
    int room=0;
    for(i=0;i<n;i++){scanf("%d",&a[i]);}
    b[0]=1;
    for(i=0;i<n;i++){room=a[room];
        b[i+1]=room; }
    return 0; }