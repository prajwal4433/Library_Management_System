#include "library.h"

void list_books()
{
    if(book_count==0)
    {
        printf("No books available in the library.\n");
        return;
    }

    printf("\nAvailable Books in Library:\n");
    printf("%-30s %-25s %-10s %s\n", "Title", "Author", "Pages", "Status");
    printf("------------------------------------------------------------\n");
    
    for(int i=0; i<book_count; i++)
    {
        printf("%-30s %-25s %-10d %s\n", 
               library[i]->title, 
               library[i]->author, 
               library[i]->pages,
               library[i]->available ? "Available" : "Checked Out");
    }
}
