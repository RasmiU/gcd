 #include <stdio.h>
int gcd(int a,int b)        //recursive function
{
    if(b==0) return a;      //a contains the value of the gcd
    return gcd(b,a%b);
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int g;
    g=gcd(x,y);
    printf("%d",g);
    return 0;
}
