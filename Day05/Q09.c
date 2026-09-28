#include <stdio.h>
#include <math.h>
int main(){double p,r,t;scanf("%lf %lf %lf",&p,&r,&t);printf("Simple Interest=%.0f, Compound Interest=%.2f",p*r*t/100,p*pow(1+r/100,t)-p);return 0;}