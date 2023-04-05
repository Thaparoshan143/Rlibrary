#pragma once

// #include<iostream>
#include"Rstring.h"

namespace Roshan
{
    class Rfile
    {
        public:
        Rfile();
        Rfile(Rstring fn);
        void OpenForRead();


        private:
        Rstring fileName;
        FILE *fptr;
    };
}
