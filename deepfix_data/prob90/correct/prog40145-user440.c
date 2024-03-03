#include <stdio.h>
int main(){
    int i,j,k,n,sum=0,num[1000],l=0;
    scanf("%d%d",&k,&n);
    for(i=1;i<=n;i++) {
        scanf("%d",&num[i]); }
    for(i=1;i<=n;i++) {
      for(j=1;j<=n;j++) {
        if(j==i) {
        continue;
        j++; }
        else if(j!=i) {
            if(num[j]+num[i]==k) {
                printf("lucky");
                l++;
                break; } } } }
    if(l==0)
    printf("unlucky");
    return 0; }