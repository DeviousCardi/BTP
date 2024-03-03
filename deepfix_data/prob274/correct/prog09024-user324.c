#include <stdio.h>
int main(){
    int n,a1[n],i,a2[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);}
        for(i=0;i<n;i++){
            a2[i]=a1[i]; }
        for(i=1;i<=a2[1];i++) {
            if(a2[i]==a1[0]){break;} }
     printf("%d ",i+n-2);
     printf("%d ",i+2);
    return 0; }