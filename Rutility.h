#pragma once

#include<iostream>

typedef unsigned int Ruint;

#define STRING_END '\0'

#define NULL_PTR "NULL POINTER"

// Global Variable

char* allocate_string_block(Ruint s);

Ruint get_string_size(const char *s);

void copy_string(char *des, const char *src);

char* append_string(const char *s, const char *a);

char* append_string(const char *s, const char *a1, const char *a2);

void add_string_at(char *s, Ruint ind, const char *a);

char* get_string_ft(const char *s, int f, int t);

void string_upper(char *s);

void string_lower(char *s);

bool does_string_contain(const char *s,const char *ss);

bool compare_string(const char *s1, const char *s2);

int get_sub_string_index(const char *ms, const char *ss);

void copy_file_content(const char *srcfn, const char *desfn);

void duplicate_file_content(const char *fn);

Ruint get_file_char_count(const char *fn);

Ruint get_random_number_ft(Ruint f, Ruint t);

char get_random_char();

char* get_random_string(Ruint size);

char* get_string_number(Ruint n);

Ruint get_number_size(Ruint n);

char* get_string_block_from_file(const char *fn ,int index, int strSize);

int find_string_index_in_file(const char *fn, const char *str);

int find_string_index_in_file(FILE* fptr, const char *str);

void append_string_in_file(const char *fn, const char *s);

void append_string_in_file_index(const char *fn, const char *as, int index);

void append_string_in_file_before_str(const char *fn, const char *appstr, const char *fstr);

void append_string_in_file_after_str(const char *fn, const char *appstr, const char *fstr);

// Other Helpers //

void print_string(const char *s);

void print_int(int n);

void print_title_int(const char *t, int n);
