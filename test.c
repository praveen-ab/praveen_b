#include <stdio.h>
int main()
{
    int n=10, reversedNumber = 0, remainder;



    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
