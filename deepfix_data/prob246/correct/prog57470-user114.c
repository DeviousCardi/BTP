#include<stdio.h>
int pow(int a,int b)
{int m=1;int i;
for (i=1;i<=b;i++)
    { m=m*a;
    }return m; }
int main()
{char s[100];int i,count=0;int sum=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{count=count+1;
}printf("%d\n",count);
for(int j=0;j<count;j++) {
    sum=sum+((pow(2,j))*s[count-1-j]);
    printf("%d\n",sum);
}printf("%d",sum); return 0;}