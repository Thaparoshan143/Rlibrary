
#include"RDArray.h"

namespace Roshan
{
    RDArrint::RDArrint()
    {
        this->root=nullptr;
        currentLength=0;
    }

    void RDArrint::Push()
    {

    }


    // Helper
    void RDArrint::AllocateInt(unsigned int size)
    {
        int newSize=size+size/2;
        if(size>0)
        {
            this->root=new int[newSize];
        }
    }
}