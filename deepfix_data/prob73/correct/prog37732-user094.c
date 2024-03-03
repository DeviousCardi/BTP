#include <stdio.h>
int main() {
    int n1,n2,p=0;
    scanf("%d %d",&n1,&n2);
    int a;
    for(int i=0;i<n1;i++)
    {  int s=0;
        for(int j=0;j<n2;j++)
        {  scanf("%d",&a);
            s=s+a; }
        if(s>p)
        p=s; }
    printf("%d",p);
    return 0; }