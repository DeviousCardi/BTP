#include <stdio.h>
int main(){
    int n,k,i,j,b,a[500],c=0;
    scanf("%d %d",&k,&n);
    for(i=0;i<n;i++) {scanf("%d",&a[i]);}
    for(i=0;i<n;i++) {
        for(j=1;j<n-1;j++) {
            b=a[i]+a[j];
            if(k==b) {printf("lucky\n");
            c++;
            break;} }
        if(k==b) break; }
 if(c==0)   printf("unlucky");
    return 0; }