#pragma once

#include<iostream>
#include"Rstring.h"
#include"Rutility.h"

using namespace Roshan;

int Test()
{
    int stringSize=get_string_size("This");
    print_int(stringSize);

    return 0;
}