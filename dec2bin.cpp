#include <stdio.h>
#include <time.h>

int main()
{
    char a = 5; // 0000 0101
    char b = 5;
    char c;

    a = 100; // 100 / 2 = 50, 50 / 2 = 25, 25 / 2 = 12, 12 / 2 = 6
    b = 4;
    c = a >> b; //  0110 |0100 >> 4 -> 0000 0110
    printf("%d >> %d = %d\n",a,b,c);

    return 0;
    
}

