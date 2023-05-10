#pragma once
#include"Rutility.h"

namespace Roshan
{
    class Rstring
    {
        public:
        Rstring();
        Rstring(const char *s);
        ~Rstring();

        char* GetString();
        void SetString(const char *s);
        void SetString(const Rstring s);


        int GetLength();
        void PrintString();
        void AppendString(const char *s);
        char* SliceString(int f, int t);
        void ToUpperCase();
        void ToLowerCase();
        bool StringExist(const char *s);
        bool StringExist(Rstring s);

        // Operator Overloading//
        Rstring operator = (Rstring& rhs);

        private:
        char *s;
        int len;

        // Helpers
        void updateLength();
        void updateNewString(const char *ns);
        void update(const char *s);        
        
    };
}