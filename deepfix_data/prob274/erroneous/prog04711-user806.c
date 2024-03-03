#include <stdio.h>
int main(){
    int n,i,j;
    int b=0,t,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
       scanf("%d",&ar[i]);
    int t[n+2];
    t[0]=1;
    t[1]=ar[0];
    for(i=2;;i++){
        t[i]=ar[t[i-1]-1];
        for(j=0;j<i;j++){
            if(t[j]==t[i]){
                b++;
                k=i-j;
                t=i;
                break; } }
        if(b>0)
        break; }
    printf("%d %d",f,d);
    return 0; }