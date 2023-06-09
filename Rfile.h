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
        ~Rfile();
        void OpenForRead();
        void OpenForWrite();
        void OpenForAppend();

        int GetIndexOfWord(const char *s);

        private:
        Rstring fileName;
        FILE *fptr;

        // Helper Functions
        void openFileIn(const char *m);
    };
}
