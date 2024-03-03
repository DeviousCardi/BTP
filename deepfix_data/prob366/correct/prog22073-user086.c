#include <stdio.h>
int main(){
    int x[10000000],b[1000],i;
    int n;
    scanf("%d",&n);
    for(i=0;i<2*n;i++) {
        scanf("%d",&x[i]); }
    int temp=0,j,count;
    for(i=0;i<2*n;i++)
    {count=0;
        for(j=0;j<2*n;j++)
        {count++;
            if(x[i]==x[j]&&i!=j)
            {if(i<j)
                {count=j-i;}
                else {
                    count=i-j; }
                break; } }
        b[i]=count;
    }temp=b[0];
    for(i=0;i<n;i++) {
        if(b[i]<temp) {
            temp=b[i]; } }
    printf("%d",temp);
    return 0; }