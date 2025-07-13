#include "library.h"

void find_book()
{
    if(book_count==0)
    {
        printf("No books in the library.\n");
        return;
    }

    int option;
    printf("Find by:\n1) Book title\n2) Author name\nEnter choice: ");
    scanf("%d",&option);

    char search_term[100];
    printf("Enter search term: ");
    scanf("%[^\n]s", search_term);

    printf("\nSearch Results:\n");
    printf("%-30s %-25s %-10s %s\n", "Title", "Author", "Pages", "Status");
    printf("------------------------------------------------------------\n");

    bool found=false;
    for(int i=0; i<book_count; i++)
    {
        bool match=false;
        if(option==BY_TITLE) 
	{
            match=(strstr(library[i]->title, search_term)!= NULL);
        } 
	else if(option==BY_AUTHOR)
	{
            match=(strstr(library[i]->author, search_term)!= NULL);
        }

        if(match)
	{
            printf("%-30s %-25s %-10d %s\n", 
                   library[i]->title, 
                   library[i]->author, 
                   library[i]->pages,
                   library[i]->available ? "Available" : "Checked Out");
            found=true;
        }
    }

    if(!found)
    {
        printf("No matching books found.\n");
    }
}
