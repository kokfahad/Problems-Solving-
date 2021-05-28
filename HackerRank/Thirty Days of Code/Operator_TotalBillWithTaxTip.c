#include<stdio.h>
#include <math.h>
int main()
{
    double mc;
    double t,ta;
    double tip,tax;
    double totalcost;

    scanf("%lf",&mc);
    scanf("%lf %lf",&t,&ta);
    tip = mc * t/100.0;
    tax = mc * ta/100.0;

    totalcost = (int) (mc + tip + tax +0.5);
    int tc;
    tc=totalcost ;
    printf("%d",tc);
}
