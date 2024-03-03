#include<stdio.h>
int main() {
    int n;
         scanf("%d",&n);
    int i,num[19];
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
    int max=-10,t=0;
        for(i=0;i<n;i++) {
                  if(num[i]>max){max=num[i];t=t+1;} }
    printf("%d",t);
    return 0; }