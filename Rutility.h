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

char* append_string(char *s, char *a1, char *a2);

void add_string_at(char *s, Ruint ind, char *a);

char* get_string_ft(char *s, int f, int t);

void string_upper(char *s);

void string_lower(char *s);

bool does_string_contain(char *s,char *ss);

bool compare_string(char *s1, char *s2);

int get_sub_string_index(char *ms, char *ss);

void copy_file_content(char *srcfn, char *desfn);

void duplicate_file_content(char *fn);

Ruint get_file_char_count(char *fn);

Ruint get_random_number_ft(Ruint f, Ruint t);

char get_random_char();

char* get_random_string(Ruint size);

char* get_string_number(Ruint n);

Ruint get_number_size(Ruint n);

void append_string_in_file(char *fn, char *s);

void append_string_int_file_index(char *fn, char *s, int index);


// Other Helpers //

void print_string(const char *s);

void print_int(int n);
