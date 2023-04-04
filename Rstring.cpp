

#include"Rstring.h"
#include"Rutility.h"

namespace Roshan{

    Rstring::Rstring()
    {
        this->s=nullptr;
        this->len=get_string_size(this->s);
    }

    Rstring::Rstring(char *s)
    {
        this->s=allocate_string_block(get_string_size(s)+1);
        copy_string(this->s,s);
        updateLength();
    }

    char* Rstring::GetString()
    {
        char* temp=allocate_string_block(this->len);
        copy_string(temp,this->s);

        return temp;
    }

    void Rstring::SetString(char *s)
    {
        updateNewString(s);
    }

    void Rstring::SetString(Rstring s)
    {
        updateNewString(s.GetString());
    }

    int Rstring::GetLength()
    {
        return this->len;
    }

    void Rstring::PrintString()
    {
        print_string(this->s);
    }

    void Rstring::AppendString(char *s)
    {
        this->s=append_string(this->s,s);
    }

    char* Rstring::SliceString(int f, int t)
    {
        if(this->len>=t)
        return get_string_fromto(this->s,f,t);

        return nullptr;
    }

    void Rstring::ToUpperCase()
    {
        string_upper(this->s);
    }

    void Rstring::ToLowerCase()
    {
        string_lower(this->s);
    }

    bool Rstring::StringExist(char *s)
    {
        return does_string_contain(this->s,s);
    }

    bool Rstring::StringExist(Rstring s)
    {
        return StringExist(s.GetString());
    }

    // Operator Overaloading
    Rstring Rstring::operator = (Rstring& rhs)
    {   
        updateNewString(rhs.GetString());
        return this->s;
    }

    // Helpers

    void Rstring::updateLength()
    {
        this->len=get_string_size(this->s);
    }

    void Rstring::updateNewString(char *ns)
    {
        if(ns==nullptr)
        {
            return;
        }
        delete (this->s);
        int newSize=get_string_size(ns);
        this->s=allocate_string_block(newSize+1);
        copy_string(this->s,ns);
        updateLength();
    }

}