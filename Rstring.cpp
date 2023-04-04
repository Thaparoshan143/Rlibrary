

#include"Rstring.h"
#include"Rutility.h"

namespace Roshan{

    Rstring::Rstring()
    {
        this->s=allocate_string_block(0);
    }

    Rstring::Rstring(char *s)
    {

        this->s=allocate_string_block(get_string_size(s));
        copy_string(s,this->s);
    }

    

}