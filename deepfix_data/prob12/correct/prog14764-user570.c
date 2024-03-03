#include <stdio.h>
int main() {
    int i,j,min,ent[200],ext[400];
    for(i=1;i<=200;i++)
        for(j=201;j<=400;j++)
        ent[i]=ext[j];
        min=j-i;
        if((j-i)<min)
        {printf("%d",min);}
    return 0; }