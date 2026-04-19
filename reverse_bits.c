unsigned char   reverse_bits(unsigned char octet)
{
    int             i;
    unsigned char   res;

    i = 8;
    res = 0;
    while (i--)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
    }
    return (res);
}