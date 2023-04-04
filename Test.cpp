#pragma once

#include<iostream>
#include"Rstring.h"
#include"Rutility.h"

using namespace Roshan;

int Test()
{
    char* temp;

    char* one="this is first";
    char* two="This is second part";

    temp=append_string(one,two);

    print_string(temp);

    return 0;
}