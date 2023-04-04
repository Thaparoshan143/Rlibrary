
#include"Rutility.h"

char* allocate_string_block(Ruint s)
{
    return (char*)malloc(s);
}

Ruint get_string_size(char *s)
{
    Ruint tempSize=0;
    while(s[tempSize]!=STRING_END)
    {
        tempSize++;
    }
    return tempSize;
}

void copy_string(char *from, char *to)
{
    Ruint index=0;

    while(from[index]!=STRING_END)
    {
        to[index]=from[index];
        index++;
    }
}

void print_string(char *s)
{
    std::cout << s << std::endl;
}

void print_int(int n)
{
    std::cout << n << std::endl;
}