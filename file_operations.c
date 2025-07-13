#include "library.h"

void save_books_to_file()
{
    FILE* file=fopen(FILENAME, "wb");
    if(!file)
    {
        printf("Error opening file for writing.\n");
        return;
    }

    fwrite(&book_count, sizeof(int), 1, file);
    for(int i=0; i<book_count; i++)
    {
        fwrite(library[i], sizeof(Book), 1, file);
    }

    fclose(file);
    printf("Library data saved to file successfully.\n");
}

void load_books_from_file()
{
    FILE* file=fopen(FILENAME, "rb");
    if(!file)
    {
        printf("No existing library data found. Starting with empty library.\n");
        return;
    }

    fread(&book_count, sizeof(int), 1, file);
    for(int i=0; i<book_count; i++)
    {
        library[i]=(Book*)malloc(sizeof(Book));
        fread(library[i], sizeof(Book), 1, file);
    }

    fclose(file);
    printf("Library data loaded from file successfully.\n");
}

void free_library()
{
    for(int i=0; i<book_count; i++)
    {
        free(library[i]);
    }
    book_count = 0;
}
