#include <stdio.h>
int gcd(int a,int b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int g;
    g=gcd(x,y);   //g stores the value of the gcd
    printf("%d",g);
    return 0;
}
