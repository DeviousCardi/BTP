#include <stdio.h>
int main(){
    int n,t,k,cr,nr,ri,c1=0,c2=0;
    scanf("%d\n",&n);
    if(2<=n<=100){
        int a[n];
        for(int i=0;<i<n;i++)
        scanf("%d",&a[i]);
        ri=a[0];
        nr=a[0];
        for(int j=nr;j<n;j++){
            for(int i=0;i<n;i++){
                nr=a[i]-1;
                c1++;
                c2++;
                if(a[j]==ri)
                t=c1;
                if(c2>t)
                k=c2-t; } } }
    printf("% d  %d",k,t);
    return 0; }