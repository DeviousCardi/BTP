#include <stdio.h>
int main() {
    int ent;
    scanf("%d",&ent);
    int LOC[2*ent];
    int diff[2];
    int flag=0;
    int i,j,min;
    min=1;
    for(i=0;i<(ent*2);i++) {
        scanf("%d",&LOC[i]); }
    for(i=0;i<(2*ent);i++) {
        for(j=0;j<(2*ent);j++) {
            if(LOC[j]==(i+1)) {
                diff[flag]=j;
                flag++; } }
        flag=0;
        if (min>(diff[1]-diff[0])) {
            min = diff[1]-diff[0]; } }
    printf("%d",min+1); }