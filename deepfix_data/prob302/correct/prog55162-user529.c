# include <stdio.h>
int main() {
    float x1,x2,x3,y1,y2,y3,q1,q2;
    scanf("%f",&x1);
    scanf("%f",&y1);
    scanf("%f",&x2);
    scanf("%f",&y2);
    scanf("%f",&x3);
    scanf("%f",&y3);
    q1=(x3-x2)*(x3-x1);
    q2=(y3-y2)*(y3-y1);
    if((q1==0&&q2<=0)||(q1<=0&&q2==0))
    printf("Point is on the rectangle.");
    else if(q1<0&&q2<0)
    printf("Point is inside the rectangle.");
    else
    printf("Point is outside the rectangle.");
    return 0; }