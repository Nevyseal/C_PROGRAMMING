#include <stdio.h>

struct Variables
{
    int x, h, p;
    float y;
};

void main()
{
    struct Variables var;
    var.x = 8;
    var.h = 6;
    var.p = 9;
    var.y = 4;

    // i) x += h%2 * p--;
    var.x = var.x + (var.h % 2) * var.p--;
    printf("\ni) x = %d\n", var.x);

    // ii) x – = p%y + --h;
    var.x = var.x - (var.p % (int)var.y) + --var.h;
    printf("ii) x = %d \n", var.x);

    // iii) x %= --h + z * p-- % h;
    var.x = 8;
    var.x = var.x % (int)(--var.h + 'z' * var.p-- % var.h);
    printf("iii) x = %d \n", var.x);

    // iv) x *= ++h + y + p++;
    var.x = 8;
    var.x = var.x * ((++var.h) + var.y + (--var.p));
    printf("iv) x = %d \n", var.x);
}
