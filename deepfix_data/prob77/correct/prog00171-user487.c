#include <stdio.h>
int main() {
    int num;
    int i,a,j,k;
    int s[1000];
    int max,min;
    scanf ("%d",&num);
    scanf ("%d",&a);
    s[0]=a;
    min=s[0];
    max=s[0];
    for (i=1;i<num;i=i+1) {
        scanf ("%d",&a);
        s[i]=a;
        if (s[i]>max)
            {max =s[i];
            j=i;}
        if (s[i]<min)
            {min =s[i];
            k=i;} }
    s[k]=max;
    s[j]=min;
    for(i=0;i<num;i=i+1)
    {  printf("%d",s[i]); }
    printf("end");
    return 0; }