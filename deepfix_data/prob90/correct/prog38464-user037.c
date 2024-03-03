#include <stdio.h>
int main(){
    int n,m,i,j,b;
    scanf("%d\n%d",&n,&m);
    int a[m];
    b=0;
    for(i=0;i<m;i++){
        scanf("%d ",&a[i]); }
    for(j=0;j<m;j++){
        if((a[j]+a[n-j])==n){b=1;
            break; } }
    if(b==0) printf("unlucky");
        else printf("lucky");
    return 0; }