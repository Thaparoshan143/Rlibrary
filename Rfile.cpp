
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

    void Rfile::OpenForRead()
    {
        char *fileName=this->fileName.GetString();

        this->fptr=fopen(fileName,"r");
        delete (fileName);
    }

}