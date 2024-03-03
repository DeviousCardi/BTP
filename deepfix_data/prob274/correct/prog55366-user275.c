#include <stdio.h>
int main(){
    int a[100],n,t=0,k=0,b[100],j=0,flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        a[i]=a[i]-1; }
    for(t=0;t<n;t++){
        b[t]=j;
        j=a[j];
        for(int i=1;i<t;i++){
            if(b[i]==b[t]){
                flag=1;
                k=t-i;
                break; } }
        if(flag==1)
            break; }
    printf("%d %d",t,k);
    return 0; }