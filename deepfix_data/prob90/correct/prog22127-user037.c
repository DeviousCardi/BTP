#include <stdio.h>
int main(){
    int n,m,i,k,j,b;
    scanf("%d\n%d\n",&n,&m);
    int a[m];
    b=0;
    for(i=0;i<m;i++){
        scanf("%d ",&a[i]); }
    for(j=0;j<m-1;j++){
        for(k=j+1;k<m;k++){if((a[j]+a[k])==n){b=1;
            break; } }
        if(b==1) break; }
    if(b==1) printf("lucky");
    else printf("unlucky");
    return 0; }