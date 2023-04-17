
#include"Rutility.h"

char* allocate_string_block(Ruint s)
{
    return new char[s];
}

Ruint get_string_size(char *s)
{
    if(s==nullptr)
    {
        print_string(NULL_PTR);
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

char* append_string(char *s, char *a1, char *a2)
{
    char *temp=append_string(s,a1);
    temp=append_string(temp,a2);
    return temp;
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

char* get_string_ft(char *s,int f, int t)
{
    if(s==nullptr || f <0 || t <0)
    {
        print_string(NULL_PTR);
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
    if(get_sub_string_index(s,ss) >=0)
    {
        return true;
    }
    else
    {
        return false;
    }
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

int get_sub_string_index(char *ms, char *ss)
{
    Ruint index=0;
    Ruint subSize=get_string_size(ss);
    
    while(*(ms+index)!=STRING_END)
    {
        if(*(ms+index)==*(ss))
        {
            if(compare_string(ms+index,ss))
            {
                return index;
            }
        }
        index++;
    }
    // If not found -1 index
    return -1;
}

void copy_file_content(char *srcfn, char *desfn)
{
    FILE *fptr1,*fptr2;
    fptr1=fopen(srcfn,"r");
    if(fptr1==nullptr)
    {
        std::cout << srcfn;
        print_string(" Named file doesn't exist!");
        fclose(fptr1);fclose(fptr2);
        return;
    }
    fptr2=fopen(desfn,"w");

    char tempParser=fgetc(fptr1);
    while(tempParser!=EOF)
    {
        fputc(tempParser,fptr2);
        tempParser=fgetc(fptr1);
    }
    fclose(fptr1);fclose(fptr2);
}

void duplicate_file_content(char *fn)
{
    Ruint extIndex=get_sub_string_index(fn,".");
    char *ext=get_string_ft(fn,extIndex+1,get_string_size(fn));

    char *dupName=get_string_ft(fn,1,extIndex);
    char *randomNumber=get_string_number(get_random_number_ft(0,10000));
    dupName=append_string(dupName,randomNumber,ext);
    copy_file_content(fn,dupName);

    delete (ext);delete (dupName);delete (randomNumber);
}

Ruint get_file_char_count(char *fn)
{
    Ruint count;
    FILE *fptr=fopen(fn,"r");
    if(fptr==nullptr)
    {
        print_string("File doesn't exist!");
        fclose(fptr);
        return -1;
    }

    while(fgetc(fptr)!=EOF)
    {
        count++;
    }
    fclose(fptr);
    return count;
}

Ruint get_random_number_ft(Ruint f, Ruint t)
{
    return (f+(rand()%(t-f+1)));
}

char get_random_char()
{
    Ruint randomNumber=get_random_number_ft(0,26);
    return 97+randomNumber;
}

char* get_random_string(Ruint size)
{
    char *temp=allocate_string_block(size+1);
    for(int i=0;i<size;i++)
    {
        *(temp+i)=get_random_char();
    }
    *(temp+size)='\0';
    return temp;
}

char* get_string_number(Ruint n)
{
    Ruint numSize=get_number_size(n);
    char *tempStr=allocate_string_block(numSize+1);

    for(int i=numSize-1;i>=0;i--)
    {
        *(tempStr+i)=48+ (n%10);
        n=n/10;
    }
    *(tempStr+numSize)='\0';

    return tempStr;
}

Ruint get_number_size(Ruint n)
{
    Ruint count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    return count;
}

char* get_string_block_from_file(char *fn, int index, int strSize)
{
    FILE *fptr=fopen(fn,"r");
    fseek(fptr,index,SEEK_SET);
    char *tempStr=allocate_string_block(strSize+1);
    char tempParser=fgetc(fptr);

    int currentSize=0;
    while(currentSize <strSize && tempParser!=EOF)
    {
        *(tempStr+currentSize)=tempParser;
        tempParser=fgetc(fptr);
        currentSize++;
    }
    *(tempStr+currentSize)='\0';
    fclose(fptr);
    return tempStr;
}

int find_string_index_in_file(FILE *fptr, char *str)
{
    char tempParser;

    int currentIndex=0;
    int seekIndex=0;
    int strSize=get_string_size(str);
    tempParser=fgetc(fptr);
    while(tempParser!=EOF)
    {
        if(tempParser==*(str+0))
        {
            print_string("first found");
            for(int i=0;i<strSize;i++)
            {
                if(tempParser!=*(str+i))
                {
                    print_string("break : ");
                    break;
                }
                seekIndex++;
                tempParser=fgetc(fptr);
            }
            if(seekIndex==strSize)
            {
                return currentIndex;
            }
        }
        if(seekIndex>0)
        {
            fseek(fptr,-seekIndex,SEEK_CUR);
            seekIndex=0;
        }
        currentIndex++;
        tempParser=fgetc(fptr);
    }
    return -1;
}

int find_string_index_in_file(char *fn, char *str)
{
    FILE *fptr=fopen(fn,"r");
    int temp=find_string_index_in_file(fptr,str);
    fclose(fptr);
    return temp;
}


void append_string_in_file(char *fn, char *s)
{
    FILE *fptr=fopen(fn,"a");
    int size=get_string_size(s);
    for(int i=0;i<size;i++)
    {
        fputc(*(s+i),fptr);
    }
    fclose(fptr);
}

void append_string_in_file_index(char *fn, char *s, int index)
{
    FILE *fptr=fopen(fn,"r");
    char *tempFile=get_random_string(10);
    tempFile=append_string(tempFile,".txt");
    FILE *fptrTemp=fopen(tempFile,"w");

    int currentIndex=0;
    char charParser;

    while(currentIndex<index)
    {
        fputc(fgetc(fptr),fptrTemp);
        currentIndex++;
    }

    fclose(fptrTemp);
    append_string_in_file(tempFile,s);
    fptrTemp=fopen(tempFile,"a");
    charParser=fgetc(fptr);

    while(charParser!=EOF)
    {
        fputc(charParser,fptrTemp);
        charParser=fgetc(fptr);
    }

    fclose(fptr);
    fclose(fptrTemp);
    copy_file_content(tempFile,fn);
}

void append_string_in_file_before_str(char *fn, char *appstr, char *fstr)
{
    int index=find_string_index_in_file(fn,fstr);

    if(index<0)
    {
        print_string("String not found");
        return;
    }

    append_string_in_file_index(fn,appstr,index);
}

void append_string_in_file_after_str(char *fn, char *appstr, char *fstr)
{
    int index=find_string_index_in_file(fn,fstr);
    index=index+get_string_size(fstr);
    if(index <0)
    {
        print_string("String not found");
        return;
    }

    append_string_in_file_index(fn,appstr,index);

}

// helper Functions


void print_string(const char *s)
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

void print_title_int(char *t, int v)
{
    print_string(t);
    print_int(v);
}
