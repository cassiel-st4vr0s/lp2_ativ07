#include <math.h>

int inverte(int x)
{
    int inv = 0;

    while (x > 0)
    {
        inv = 10 * inv + x % 10;
        x /= 10;
    }
    return inv;
}

