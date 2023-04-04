#pragma once
#include<iostream>


typedef unsigned int Ruint;

#define STRING_END '\0'

char* allocate_string_block(Ruint s);

Ruint get_string_size(char *s);

void copy_string(char *from, char *to);

char* append_string(char *s, char *a);

void add_string_at(char *s, Ruint ind, char *a);



// Other Helpers //

void print_string(char *s);

void print_int(int n);