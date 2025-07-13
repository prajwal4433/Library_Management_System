#ifndef LIBRARY_H
#define LIBRARY_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

#define MAX_BOOKS 1000
#define FILENAME "library.dat"

typedef struct
{
    char title[100];
    char author[100];
    int pages;
    bool available;
}Book;

typedef enum
{
    ADD_BOOK='a',
    LIST_BOOKS='l',
    COUNT_BOOKS='c',
    TAKE_BOOK='t',
    SORT_BOOKS='s',
    FIND_BOOK='f',
    SAVE_BOOKS='v',
    QUIT='q'
}MenuOption;

typedef enum
{
    BY_TITLE=1,
    BY_AUTHOR=2
}SortFindOption;

extern Book* library[MAX_BOOKS];
extern int book_count;

// Function declarations
void add_new_book();
void list_books();
void list_by_title();
void count_specific_book();
void take_book();
void sort_books();
void find_book();
void save_books_to_file();
void load_books_from_file();
void free_library();

#endif
