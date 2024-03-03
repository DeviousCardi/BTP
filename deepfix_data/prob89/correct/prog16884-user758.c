#include <stdio.h>
int main(){
    int k,n,sum=0,num;
    scanf("%d\n",&k);
    scanf("%d\n",&n);
    int nolst[n];
    for(int a=0;a<n;a++)
    scanf("%d ",&nolst[a]);
    for(int i=0;i<n;i++){
        sum=sum+i;
        for(int j=i+1;j<n;j++){
            sum=sum+j;
            if(sum==k){
                printf("lucky");
                num=2;
                break; }
            sum=sum-j; }
      if(num!=2)
        printf("unlucky"); }
    return 0; }