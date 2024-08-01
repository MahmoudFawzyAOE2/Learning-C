#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    // this is a 1-D array (index->shelf, value->n_books)
    total_number_of_books = (int*)malloc(total_number_of_shelves * sizeof(int));
    
    /* this is a 2-D array (index-> shelve, value-> 1-D array represent the shelve (inner array)
                                                    (index -> book, value-> n_pages ))*/
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    
    //initializing array number of books (all shelves must be empty in the beginning)
    for (int i=0; i<total_number_of_shelves; i++)
    {
        total_number_of_books[i] = 0; 
    }
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            // x -> n_shelf,   y -> n_pages
            int x, y;
            scanf("%d %d", &x, &y);
            
            // adding 1 memory location to the shelve inner array
            total_number_of_pages[x] = (int*)realloc(total_number_of_pages[x], (total_number_of_books[x] + 1) * sizeof(int));
            
            // adding the book to the shelve by adding its n_pages value
            total_number_of_pages[x][total_number_of_books[x]] = y;
            
            // adding the book to the shelve book counter array
            total_number_of_books[x]++; 
            
        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}