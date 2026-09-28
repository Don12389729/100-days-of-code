#include <stdio.h>
int main(){
    int u,b;
    scanf("%d",&u);
    if(u<=100)b=u*5;
    else if(u<=200)b=500+(u-100)*7;
    else if(u<=300)b=1200+(u-200)*10;
    else b=2200+(u-300)*12;
    printf("Bill: ₹%d",b);
    return 0;
}
