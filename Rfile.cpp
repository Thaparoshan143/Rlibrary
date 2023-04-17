
#include"Rfile.h"

namespace Roshan
{
    Rfile::Rfile()
    {
        this->fptr=nullptr;
        this->fileName.SetString("");
    }

    Rfile::Rfile(Rstring fn)
    {
        this->fptr=nullptr;
        this->fileName=fn;
    }

    Rfile::~Rfile()
    {
        this->fptr=nullptr;
    }

    void Rfile::OpenForRead()
    {
        openFileIn("r");
    }

    void Rfile::OpenForWrite()
    {
        openFileIn("w");
    }

    void Rfile::OpenForAppend()
    {
        openFileIn("a");
    }

    int Rfile::GetIndexOfWord(char *s)
    {
        openFileIn("r");
        return find_string_index_in_file(this->fptr,s);
        fclose(this->fptr);
    }

    void Rfile::openFileIn(char *m)
    {
        if(this->fptr!=nullptr)
        {
            fclose(this->fptr);
        }

        char *fileName=this->fileName.GetString();

        this->fptr=fopen(fileName,m);
        delete (fileName);
    }
}