
#include"Rutility.h"

char* allocate_string_block(Ruint s)
{
    return (char*)malloc(s);
}

Ruint get_string_size(char *s)
{
    Ruint tempSize=0;
    while(*(s+tempSize)!=STRING_END)
    {
        tempSize++;
    }
    return tempSize;
}

void copy_string(char *from, char *to)
{
    Ruint index=0;

    while(*(from+index)!=STRING_END)
    {
        *(to+index)=*(from+index);
        index++;
    }
}

char* append_string(char *s, char *a)
{
    Ruint newStrSize=get_string_size(s)+get_string_size(a)+1;

    char *newStrPtr=allocate_string_block(newStrSize);
    copy_string(s,newStrPtr);
    add_string_at(newStrPtr,get_string_size(s),a);

    *(newStrPtr+newStrSize)=STRING_END;

    return newStrPtr;
}

void add_string_at(char *s, Ruint ind, char *a)
{
    Ruint addSize=get_string_size(a);
    Ruint index=0;
    while(*(a+index)!=STRING_END)
    {
        *(s+ind+index)=*(a+index);
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