#pragma once

#include<iostream>
#include"Rstring.h"
#include"Rutility.h"

using namespace Roshan;

int Test()
{   
    Rstring temp,str1;
    str1.SetString("this is cool");
    temp=str1;

    temp.SetString("This is different");
    temp.PrintString();
    str1.PrintString();

    

    return 0;
}