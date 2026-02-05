

#include <iostream>
using namespace std;

int toggle_bit(int n, unsigned pos)
{
    int mask = 1 << pos;

    return n ^ mask;
}

int set_bit(int n, unsigned pos)
{
    int mask = 1 << pos;

    return n | mask;
}

int clear_bit(int n, unsigned pos)
{
    int mask = ~(1 << pos);

    return n & mask;
}

bool is_bit_set(int n, unsigned pos)
{
    int mask = 1 << pos;
    bool rez = (n & mask) != 0;

    return rez;
}

int set_multiple_bits(int n, unsigned mask)
{
    return n | mask;
}

int clear_multiple_bits(int n, unsigned mask)
{
    return n & ~mask;
}

int toggle_multiple_bits(int n, unsigned mask)
{
    return n ^ mask;
}
