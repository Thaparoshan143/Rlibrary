#pragma once

#include<iostream>

typedef unsigned int Ruint;

#define STRING_END '\0'

#define NULL_PTR "NULL POINTER"

// Global Variable

char* allocate_string_block(Ruint s);

Ruint get_string_size(char *s);

void copy_string(char *des, char *src);

char* append_string(char *s, char *a);

void add_string_at(char *s, Ruint ind, char *a);

char* get_string_fromto(char *s, int f, int t);

void string_upper(char *s);

void string_lower(char *s);

bool does_string_contain(char *s,char *ss);

bool compare_string(char *s1, char *s2);

// Other Helpers //

void print_string(char *s);

void print_int(int n);