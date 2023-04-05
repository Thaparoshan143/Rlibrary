#pragma once
#include"Rutility.h"

namespace Roshan
{
    class Rstring
    {
        public:
        Rstring();
        Rstring(char *s);

        char* GetString();
        void SetString(char *s);
        void SetString(Rstring s);


        int GetLength();
        void PrintString();
        void AppendString(char *s);
        char* SliceString(int f, int t);
        void ToUpperCase();
        void ToLowerCase();
        bool StringExist(char *s);
        bool StringExist(Rstring s);

        // Operator Overloading//
        Rstring operator = (Rstring& rhs);

        private:
        char *s;
        int len;

        // Helpers
        void updateLength();
        void updateNewString(char *ns);
        void update(char *s);        
        
    };
}