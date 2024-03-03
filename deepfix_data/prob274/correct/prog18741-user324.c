#include <stdio.h>
int main(){
    int n,a[n],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
        for(i=1;i<=a[1];i++) {
            if(a[i]==a[0]){break;} }
     printf("%d ",i+2);
     printf("%d ",i+1);
    return 0; }