#include <stdio.h>
int main() {
    int x1,x2,y1,y2,p=0,q=1;
    float m;
    scanf("%d %d\n",&x1,&y1);
    scanf("%d %d\n",&x2,&y2);
    if((x1==x2)&&(y1==y2))
        return 0;
    else if(x1>100 || x1<-100||x2>100 || x2<-100||y1>100 || y1<-100||y2>100 || y2<-100)
        return 0;
    else {
        p=y2-y1;
        q=x2-x1;
        m=p/q;
        if(q==0)
            printf("inf");
        else if(q!=0)
            printf("%.2f",m); }
    return 0; }