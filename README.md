# Library

## Mini Project : LIBRARY

Objective: Your project on library management with options to add_books, list_books, list by title, count of books, etc...\
Program uses structure to store books record.

User Interface:\
The application when executed, should display a menu as given below.

------------------MENU--------------------------
- a/A: Add a new book to library ( book  name , author name and no.of pages )
- l/L: List available books in library with book name and author name
- c/C: Display count of specific book
- t/T: Take a book from library.
- s/S: Sort books for display
    - Based on book name
    - Based on author
 - f/F: Find book in library
      - Based on book name
      - Based on author
  - v/V: To save books info in file
  - q/Q: Quit from app
 
 Requirements:
  - Each new book entry should contain book  name , author name , no.of pages.
  - Make sure that, duplicates should not be store in library.
  - Different books can store in library with same author.
  - Multiple authors can write same book.

DELIVERABLES:
 1. This app should contain user-defined functions for each and every task. Ex:  add_new_book(), find_book(), etc....
 2. Use makefile and make tool to manage the project.
 3. Use readme.txt to explain the usage of the project, how to compile, execute etc..
 4. If we re-launch  the app , old / previows data should be available.
 5. Deliver the project, in a folder(named your ID), containing all source files, headerfiles, makefile, and readme.txt.
 
 
 PROJECT approach :
 1. FileHandling : File based functions like save(), syncfile(),  should use to store data in file.
 2. For every function , separate file should be implemented.


 Project Version1
 1. Use structure pointer.
 2. DMA require to store books info.
 3. No file handling functions.

 Project Version2
 1. Use structure pointer and implement by using  SLL.
 2. File handling functions require to store data.
 
 SUGGESTION:\
 A)Use typedef, enum, union where-ever applicable.\
 B) Use separate header file to keep all structure, union , and typedefs.
