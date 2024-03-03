#include <stdio.h>
int main(){
    int k,n,i,j,c;
    scanf("%d\n%d",&k,&n);
    int a[n];
        for(i=0;i<n;i++) {
            scanf("%d",&a[i]); }
        for(c=0;c<n;c++) {
            for(j=c+1;j<n;j++) {
                if(a[c]+a[j]==k) {
                    printf("lucky");
                    d=0; } }
            if(d==0) {
                break; } }
        printf("unlucky");
    return 0; }