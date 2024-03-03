#include <stdio.h>
int main() {
    int i,n,j,a[100],b[100],count=0;
    scanf("%d",&n);
    for(i=0;i<100;i++){
        scanf("%d ",&a[i]);
        b[i]=0; }
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                    if(a[j]==i+1){
                    count=count+1;
                    b[i]=1;
                    if(count==2){
                    printf("%d\n",a[j]);
                    break; } } } }
        for(i=0;i<n;i++){
              if(b[i]==0)
              printf("%d",i+1); }
    return 0; }