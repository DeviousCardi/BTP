#include <stdio.h>
int main() {
    int num,flag=0;
    int i,j,k;
    int list[1000];
    scanf("%d",&k);
    scanf("%d",&num);
    for(j=0;j<num;j++)
     scanf("%d",&list[j]);
    int occur[499];
    int check=k%2;
    for(i=0;i<=499;i++)
     occur[i]=0;
    if(num==1) {
        printf("unlucky"); }
    else if(check!=0) {
     for(i=0;i<=499;i++) {
      for(j=0;j<=num;j++) {
           if(list[j]==i)
            occur[i]=occur[i]+1; } }
    for(i=0;i<k;i++) {
       if(occur[i]!=0 && occur[k-i]!=0)
        flag=1; }
    if(flag==1)
      printf("lucky");
    else
      printf("unlucky"); }
    return 0; }