#include <stdio.h>
int main(){
    int k,n,i,j,c;
    int a[n];
    scanf("%d\n%d",&k,&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]); }
        for(c=0;c<n;c++){
            for(j=i+1;j<n;j++){
                if(a[c]+a[j]==k)
                printf("lucky"); } }
        printf("unlucky");
    return 0; }