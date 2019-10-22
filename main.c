#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,k;
    printf("birinci sayi girin\n");
    scanf("%d",&a);
    printf("ikinci sayi girin\n");
    scanf("%d",&b);

    k=a%b;
    while(k!=0)
    {
        a=b;
        b=k;
        k=a%b;

    }
    printf("sayilarin eboblari : %d",b);


    return 0;
}
