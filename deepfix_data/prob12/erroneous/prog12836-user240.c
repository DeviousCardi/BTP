#include <stdio.h>
int main(){
    int n,b;
    int j=400;
    scanf("%d/",&n);
    int a[2*n];
    for(i=1;i<=2n;i=i+1)
        {scanf("%d",&a[i]);}
    for(i=1;i<2n;i=i+1)
        {for(m>i;m<=2n;m=m+1)
            {if(a[i]=a[m])
                {b=m-i;};
             if(b<j){j=b;};};}
    printf("%d",&j);
    return 0; }