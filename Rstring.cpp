
#include"Rstring.h"

namespace Roshan{

    Rstring::Rstring()
    {
        this->s=allocate_string_block(0);
        this->len=get_string_size(this->s);
    }

    Rstring::Rstring(char *s)
    {
        this->s=nullptr;
        updateNewString(s);
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
        this->s=s.GetString();
        updateLength();
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
        return get_string_ft(this->s,f,t);

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
        char *temp=s.GetString();
        if(does_string_contain(this->s,temp))
        {
            delete (temp);
            return true;
        }
        else
        {
            delete (temp);
            return false;
        }
    }

    // Operator Overaloading
    Rstring Rstring::operator = (Rstring& rhs)
    {   
        this->s=rhs.GetString();
        updateLength();
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
        if(this->s!=nullptr)
        delete (this->s);

        int newSize=get_string_size(ns);
        this->s=allocate_string_block(newSize+1);
        update(ns);
    }

    void Rstring::update(char *s)
    {
        copy_string(this->s,s);
        updateLength();
    }

}