#include "library.h"

int compare_by_title(const void* a, const void* b)
{
    const Book* book1=*(const Book**)a;
    const Book* book2=*(const Book**)b;
    return strcmp(book1->title, book2->title);
}

int compare_by_author(const void* a, const void* b)
{
    const Book* book1=*(const Book**)a;
    const Book* book2=*(const Book**)b;
    return strcmp(book1->author, book2->author);
}

void sort_books()
{
    if (book_count==0)
    {
        printf("No books to sort.\n");
        return;
    }

    int option;
    printf("Sort by:\n1) Book title\n2) Author name\nEnter choice: ");  
    scanf("%d", &option);

    // Clear input buffer
    while(getchar()!='\n');

    switch(option)
    {
        case BY_TITLE:
            qsort(library, book_count, sizeof(Book*), compare_by_title);
            printf("Books sorted by title.\n");
            break;
        case BY_AUTHOR:
            qsort(library, book_count, sizeof(Book*), compare_by_author);
            printf("Books sorted by author.\n");
            break;
        default:
            printf("Invalid option.\n");
            return;
    }

    list_books();
}
