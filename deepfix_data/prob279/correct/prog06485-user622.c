#include <stdio.h>
int main() {
int n,i,j,num,RN,MN;
int s[10];
scanf("%d",&n);
for(i=0;i<n;i++) {
    scanf("%d",&num);
    s[i]=num;
    for(j=i+1;j<n;j++) {
            if(s[j]!=num+1)
            { if(s[j]<num+1){
                RN=num;
                printf("%d\n",RN);
                break; }
              else continue; }
    }}
for(i=0;i<n;i++) {
     if(s[i]==i+1) {
            continue; }
     else {MN=i+1;} }
 printf("%d",MN);
    return 0; }