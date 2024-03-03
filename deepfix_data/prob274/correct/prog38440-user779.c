#include <stdio.h>
int main(){
    int a[100];
    int n,m,p,b,z,q,count=0;
    scanf("%d",&n);
    for(p=0;p<n;p++){
        scanf("%d",&a[p]); }
            for(m=0;m<n;m++){
            z=a[m];
            q=a[z-1];
            m=q-2;
            if(a[m]!=a[z-1]){
                count=count+1; }
            else{} }
        printf("%d",count);
    return 0; }