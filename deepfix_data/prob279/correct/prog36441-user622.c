#include <stdio.h>
int main() {
int n,i,j,num,RN,MN;
int s[20];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&s[i]);
    num=1;
    for(j=1;j<n;j++) {
        if(s[j]!=num+1)
            { if(s[j]<num+1){
                RN=num;
                break; }
             else continue; } } }
for(i=0;i<n;i=i+1) {
     if(s[i]!=i+1){
         MN=n;}
     else continue; }
 printf("%d\n",RN);
 printf("%d",MN);
    return 0; }