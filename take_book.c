#include "library.h"

void take_book()
{
    if(book_count == 0)
    {
        printf("No books available to take.\n");
        return;
    }

    char title[100], author[100];
    printf("Enter book title: ");
    scanf(" %[^\n]s", title);
    printf("Enter author name: ");
    scanf(" %[^\n]s", author);

    bool found=false;
    for(int i=0; i<book_count; i++)
    {
        if(strcmp(library[i]->title, title)==0 && strcmp(library[i]->author, author)==0)
	{
            if(library[i]->available)
	    {
                library[i]->available=false;
                printf("You have successfully taken '%s' by %s.\n", title, author);
            }
	    else
	    {
                printf("This book is already checked out.\n");
            }
            found=true;
            break;
        }
    }

    if(!found)
    {
        printf("Book not found in the library.\n");
    }
}
