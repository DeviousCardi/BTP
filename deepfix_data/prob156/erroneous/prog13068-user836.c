#include<stdio.h>
    int main() {
        int n,m,h;
        int max=0;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++)
        { sum=0;
        for(int j=0;j<m;j++)
            scanf("%d",&h);
            sum=sum+h;}
            if(sum>max)
            max=sum; }
        printf("%d",sum);
        return 0; }