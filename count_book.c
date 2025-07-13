#include "library.h"

void count_specific_book()
{
    if(book_count==0)
    {
        printf("No books in the library.\n");
        return;
    }

    char title[100];
    printf("Enter book title to count: ");
    scanf(" %[^\n]s",title);

    int count=0;
    for(int i=0; i<book_count; i++) 
    {
        if(strcmp(library[i]->title, title)==0)
       	{
            count++;
        }
    }

    printf("Number of copies of '%s' in library: %d\n", title, count);
}
