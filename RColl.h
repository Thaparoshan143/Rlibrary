#pragma once

#include<iostream>

namespace Roshan
{

    // RColl2
    template <typename T>
    class RColl2
    {
        public:
        RColl2();
        RColl2(T x, T y);

        void PrintVal();
        
        // overloading operators
        RColl2<T> operator + (const RColl2<T>& rhs);
        RColl2<T> operator - (const RColl2<T>& rhs);
        RColl2<T> operator * (const RColl2<T>& rhs);
        RColl2<T> operator * (const float& rhs);
        RColl2<T> operator / (const RColl2<T>& rhs);
        RColl2<T> operator / (const float& rhs);

        private:
        T x,y;
    };

    // RColl3 decleration
    template <typename T>
    class RColl3
    {
        public:
        RColl3();
        RColl3(T x, T y,T z);

        void PrintVal();
        
        // overloading operators
        RColl3<T> operator + (const RColl3<T>& rhs);
        RColl3<T> operator - (const RColl3<T>& rhs);
        RColl3<T> operator * (const RColl3<T>& rhs);
        RColl3<T> operator * (const float& rhs);
        RColl3<T> operator / (const RColl3<T>& rhs);
        RColl3<T> operator / (const float& rhs);

        private:
        T x,y,z;
    };

    // RColl4 decleration
    template <typename T>
    class RColl4
    {
        public:
        RColl4();
        RColl4(T x, T y,T z,T w);

        void PrintVal();
        
        // overloading operators
        RColl4<T> operator + (const RColl4<T>& rhs);
        RColl4<T> operator - (const RColl4<T>& rhs);
        RColl4<T> operator * (const RColl4<T>& rhs);
        RColl4<T> operator * (const float& rhs);
        RColl4<T> operator / (const RColl4<T>& rhs);
        RColl4<T> operator / (const float& rhs);

        private:
        T x,y,z,w;
    };
}

// template doesn't allow spliting so the definiton and the declaration should be at .h file 
#include"RColl.cpp"
