#include <stdio.h>
int main(){
    int i,j,n,max=0,mx=0;
    scanf("%d",&n);
    int a[2*n],b[n+1];
    for(int p=0;p<2*n;p++){
        scanf("%d",&a[p]); }
    for(i=0;i<2*n;i++){
        for(j=i;j<2*n;j++){
            if(a[i]==a[j]){
                b[a[i]]=j-i;
                if(j-i>max){max=j-i;mx=a[i];}
                break; } } }
    printf("%d",mx);
    return 0; }