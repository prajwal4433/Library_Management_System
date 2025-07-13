#include "library.h"

Book* library[MAX_BOOKS]={NULL};
int book_count=0;

void display_menu()
{
	printf("\n------------------MENU--------------------------\n");
	printf("a/A: Add a new book to library\n");
	printf("l/L: List available books in library\n");
	printf("c/C: Display count of specific book\n");
	printf("t/T: Take a book from library\n");
	printf("s/S: Sort books for display\n");
	printf("f/F: Find book in library\n");
	printf("v/V: To save books info in file\n");
	printf("q/Q: Quit from app\n");
	printf("-----------------------------------------------\n");
	printf("Enter your choice: ");
}

void process_choice(char choice)
{
	switch (choice)
	{
		case 'a':
		case 'A':
			add_new_book();
			break;
		case 'l':
		case 'L':
			list_books();
			break;
		case 'c':
		case 'C':
			count_specific_book();
			break;
		case 't':
		case 'T':
			take_book();
			break;
		case 's':
		case 'S':
			sort_books();
			break;
		case 'f':
		case 'F':
			find_book();
			break;
		case 'v':
		case 'V':
			save_books_to_file();
			break;
		case 'q':
		case 'Q':
			printf("Quitting application...\n");
			break;
		default:
			printf("Invalid choice. Please try again.\n");
	}
}

int main()
{
	load_books_from_file();

	char choice;
	do
	{
		display_menu();
		scanf(" %c", &choice);
		process_choice(choice);
	}while(choice!='q' && choice!='Q');

	free_library();
	return 0;
}
