#include <stdio.h>
int main(){
    int a[100],n,t=0,k=0,b[100],j=1,flag;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }
    for(int i=0;i<n;i++){
        b[i]=j;
        j=a[j+1];
        t++;
        for(int l=0;l<=i;l++){
            if(b[l]==j){
                flag=1;
                k=i-l;
                break; } }
        if (flag==1)
            break; }
    printf("%d %d",t,k);
    return 0; }