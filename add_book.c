#include "library.h"

bool is_duplicate(const char* title, const char* author)
{
    for(int i=0; i<book_count; i++)
    {
        if(strcmp(library[i]->title, title)==0 && strcmp(library[i]->author, author)==0)
       	{
            return true;
        }
    }
    return false;
}

void add_new_book()
{
    if(book_count>=MAX_BOOKS)
    {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    Book* new_book=(Book*)malloc(sizeof(Book));
    if(!new_book)
    {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter book title: ");
    scanf(" %[^\n]s", new_book->title);
    printf("Enter author name: ");
    scanf(" %[^\n]s", new_book->author);
    printf("Enter number of pages: ");
    scanf("%d", &new_book->pages);
    new_book->available=true;

    if(is_duplicate(new_book->title, new_book->author))
    {
        printf("This book already exists in the library.\n");
        free(new_book);
        return;
    }

    library[book_count++]=new_book;
    printf("Book added successfully!\n");
}
