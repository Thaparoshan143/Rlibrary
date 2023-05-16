#include"RColl.h"

namespace Roshan
{
    // RColl2 definition
    template <typename T>
    RColl2<T>::RColl2()
    {
        this->x=0;
        this->y=0;
    }

    template <typename T>
    RColl2<T>::RColl2(T x, T y)
    {
        this->x=x;
        this->y=y;
    }

    template <typename T>
    void RColl2<T>::PrintVal()
    {
        std::cout << "X : " << this->x << " Y : " << this->y << std::endl;
    }

    // overloading the operators
    template <typename T>
    RColl2<T> RColl2<T>::operator + (const RColl2<T>& rhs)
    {
        RColl2<T> temp;
        temp.x=this->x+rhs.x;
        temp.y=this->y+rhs.y;
        return temp;
    }

    template <typename T>
    RColl2<T> RColl2<T>::operator - (const RColl2<T>& rhs)
    {
        RColl2<T> temp;
        temp.x=this->x-rhs.x;
        temp.y=this->y-rhs.y;
        return temp;
    }

    template <typename T>
    RColl2<T> RColl2<T>::operator * (const RColl2<T>& rhs)
    {
        RColl2<T> temp;
        temp.x=this->x*rhs.x;
        temp.y=this->y*rhs.y;
        return temp;
    }

    template <typename T>
    RColl2<T> RColl2<T>::operator * (const float& rhs)
    {
        RColl2<T> temp;
        temp.x=rhs*this->x;
        temp.y=rhs*this->y;
        return temp;
    }

    template <typename T>
    RColl2<T> RColl2<T>::operator / (const RColl2<T>& rhs)
    {
        RColl2<T> temp;
        temp.x=this->x/rhs.x;
        temp.y=this->y/rhs.y;
        return temp;
    }

    template <typename T>
    RColl2<T> RColl2<T>::operator / (const float& rhs)
    {
        RColl2<T> temp;
        temp.x=this->x/rhs;
        temp.y=this->y/rhs;
        return temp;
    }


    // Rcoll3 definition
    template <typename T>
    RColl3<T>::RColl3()
    {
        this->x=0;
        this->y=0;
        this->z=0;
    }

    template <typename T>
    RColl3<T>::RColl3(T x, T y,T z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }

    template <typename T>
    void RColl3<T>::PrintVal()
    {
        std::cout << "X : " << this->x << " Y : " << this->y << " Z : " << this->z << std::endl;
    }

    // overloading the operators
    template <typename T>
    RColl3<T> RColl3<T>::operator + (const RColl3<T>& rhs)
    {
        RColl3<T> temp;
        temp.x=this->x+rhs.x;
        temp.y=this->y+rhs.y;
        temp.z=this->z+rhs.z;
        return temp;
    }

    template <typename T>
    RColl3<T> RColl3<T>::operator - (const RColl3<T>& rhs)
    {
        RColl3<T> temp;
        temp.x=this->x-rhs.x;
        temp.y=this->y-rhs.y;
        temp.z=this->z-rhs.z;
        return temp;
    }

    template <typename T>
    RColl3<T> RColl3<T>::operator * (const RColl3<T>& rhs)
    {
        RColl3<T> temp;
        temp.x=this->x*rhs.x;
        temp.y=this->y*rhs.y;
        temp.z=this->z*rhs.z;
        return temp;
    }

    template <typename T>
    RColl3<T> RColl3<T>::operator * (const float& rhs)
    {
        RColl3<T> temp;
        temp.x=rhs*this->x;
        temp.y=rhs*this->y;
        temp.z=rhs*this->z;
        return temp;
    }

    template <typename T>
    RColl3<T> RColl3<T>::operator / (const RColl3<T>& rhs)
    {
        RColl3<T> temp;
        temp.x=this->x/rhs.x;
        temp.y=this->y/rhs.y;
        temp.z=this->z/rhs.z;
        return temp;
    }

    template <typename T>
    RColl3<T> RColl3<T>::operator / (const float& rhs)
    {
        RColl3<T> temp;
        temp.x=this->x/rhs;
        temp.y=this->y/rhs;
        temp.z=this->z/rhs;
        return temp;
    }


      // Rcoll4 definition
    template <typename T>
    RColl4<T>::RColl4()
    {
        this->x=0;
        this->y=0;
        this->z=0;
        this->w=0;
    }

    template <typename T>
    RColl4<T>::RColl4(T x, T y,T z,T w)
    {
        this->x=x;
        this->y=y;
        this->z=z;
        this->w=w;
    }

    template <typename T>
    void RColl4<T>::PrintVal()
    {
        std::cout << "X : " << this->x << " Y : " << this->y << " Z : " << this->z << " W : "<< this->w << std::endl;
    }

    // overloading the operators
    template <typename T>
    RColl4<T> RColl4<T>::operator + (const RColl4<T>& rhs)
    {
        RColl4<T> temp;
        temp.x=this->x+rhs.x;
        temp.y=this->y+rhs.y;
        temp.z=this->z+rhs.z;
        temp.w=this->w+rhs.w;
        return temp;
    }

    template <typename T>
    RColl4<T> RColl4<T>::operator - (const RColl4<T>& rhs)
    {
        RColl4<T> temp;
        temp.x=this->x-rhs.x;
        temp.y=this->y-rhs.y;
        temp.z=this->z-rhs.z;
        temp.w=this->w-rhs.w;
        return temp;
    }

    template <typename T>
    RColl4<T> RColl4<T>::operator * (const RColl4<T>& rhs)
    {
        RColl4<T> temp;
        temp.x=this->x*rhs.x;
        temp.y=this->y*rhs.y;
        temp.z=this->z*rhs.z;
        temp.w=this->w*rhs.w;
        return temp;
    }

    template <typename T>
    RColl4<T> RColl4<T>::operator * (const float& rhs)
    {
        RColl4<T> temp;
        temp.x=rhs*this->x;
        temp.y=rhs*this->y;
        temp.z=rhs*this->z;
        temp.w=rhs*this->w;
        return temp;
    }

    template <typename T>
    RColl4<T> RColl4<T>::operator / (const RColl4<T>& rhs)
    {
        RColl4<T> temp;
        temp.x=this->x/rhs.x;
        temp.y=this->y/rhs.y;
        temp.z=this->z/rhs.z;
        temp.w=this->w/rhs.w;
        return temp;
    }

    template <typename T>
    RColl4<T> RColl4<T>::operator / (const float& rhs)
    {
        RColl4<T> temp;
        temp.x=this->x/rhs;
        temp.y=this->y/rhs;
        temp.z=this->z/rhs;
        temp.w=this->w/rhs;
        return temp;
    }
}
