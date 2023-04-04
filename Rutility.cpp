#include"Rutility.h"

char* allocate_string_block(Ruint s)
{
    return new char[s];
}

Ruint get_string_size(char *s)
{
    if(s==nullptr)
    {
        print_string("Null!");
        return 0;
    }
    Ruint tempSize=0;

    while(*(s+tempSize)!=STRING_END)
    {
        tempSize++;
    }
    return tempSize;
}

void copy_string(char *des, char *src)
{
    if(src==nullptr || des==nullptr)
    {
        return;
    }

    Ruint index=0;

    while(*(src+index)!=STRING_END)
    {
        *(des+index)=*(src+index);
        index++;
    }
    *(des+index)=*(src+index);
}

char* append_string(char *s, char *a)
{
    int newSize=get_string_size(s) + get_string_size(a);
    // Allocating new block and one more for end of string//
    char *newPtr=allocate_string_block(newSize+1);
    
    copy_string(newPtr,s);
    add_string_at(newPtr,get_string_size(s),a);

    delete (s);
    
    return newPtr;
}

void add_string_at(char *s, Ruint ind, char *a)
{
    int addSize=get_string_size(a);
    Ruint index=0;

    while(*(a+index)!=STRING_END)
    {
        *(s+ind+index)=*(a+index);
        index++;
    }
    // Copying string terminator
    *(s+ind+index)=*(a+index);
}

char* get_string_fromto(char *s,int f, int t)
{
    if(s==nullptr || f <0 || t <0)
    {
        print_string("NULL or negative value!");
        return nullptr;
    }

    char *newString=allocate_string_block(t-f+2);

    for(int i=f-1;i<t;i++)
    {
        *(newString+i-f+1)=*(s+i);
    }
    *(newString+t)=STRING_END;
    return newString;

}

void string_upper(char *s)
{
    Ruint index=0;

    while(*(s+index)!=STRING_END)
    {
        if(*(s+index) >= 97 && *(s+index) <= 122)
        {
            *(s+index)=*(s+index)-32;
        }
        index++;
    }
}

void string_lower(char *s)
{
    Ruint index=0;

    while(*(s+index)!=STRING_END)
    {
        if(*(s+index) >= 65 && *(s+index) <= 90)
        {
            *(s+index)=*(s+index)+32;
        }
        index++;
    }
}

bool does_string_contain(char *s, char *ss)
{
    Ruint index=0;
    Ruint subSize=get_string_size(ss);
    
    while(*(s+index)!=STRING_END)
    {
        if(*(s+index)==*(ss))
        {
            print_string("First char matched");
            if(compare_string(s+index,ss))
            {
                print_string("All matched");    
                return true;
            }
        }
        index++;
    }
    print_string("Not matched");
    return false;

}

bool compare_string(char *s1, char *s2)
{
    Ruint index=0;

    while(*(s2+index)!=STRING_END)
    {
        if(*(s1+index)!=*(s2+index))
        {
            return false;
        }
        index++;
    }
    return true;
}




// helper Functions


void print_string(char *s)
{
    if(s==nullptr)
    {
        std::cout << "String not Passed!" << std::endl;
        return;
    }
    std::cout << s << std::endl;
}

void print_int(int n)
{
    std::cout << n << std::endl;
}