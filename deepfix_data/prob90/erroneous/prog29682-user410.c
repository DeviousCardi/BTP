#include <stdio.h>
 int n;
int counter(int num) {
    int j;
        for(j=0;j<n;j++) {
            if(list[j]==i)
            count++; }
        return count; }
int main(){
    int lucky,i,flag,num,p1=0,p2=0;
     scanf("%d",&n);
    scanf("%d",&lucky);
    int list[n];
    for(i=0;i<n;i++)
        scanf("%d",&list[i]);
   for(i=0;i<=499;i++) {
            p1=counter[i];
            p2=counter[lucky-i];
            if(p1>0&&p2>0) {
            printf("lucky");
            break; }
            else
            continue; } }
    return 0; }