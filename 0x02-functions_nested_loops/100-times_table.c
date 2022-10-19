#include "main.h"
/**
 *Description:print_times_table- Print timetables for n
 *@n:variable for multiplication
 */
void print_times_table(int n)
{
int i, j, res;
if (!(n > 15 || n < 0))
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
res = (i * j);
if (j != 0)
{
putchar(',');
putchar(' ');
}
if (res < 10 && j != 0)
{
putchar(' ');
putchar(' ');
putchar((res % 10) + '0');
}
else if (res >= 10 && res < 100)
{
putchar(' ');
putchar((res / 10) + '0');
putchar((res % 10) + '0');
}
else if (res >= 100 && j != 0)
{
putchar((res / 100) + '0');
putchar((res / 10) % 10 + '0');
putchar((res % 10) + '0');
}
else
{
putchar((res % 10) + '0');
}
}
putchar('\n');
}
}
}
