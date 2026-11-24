#include <menu.h>

void swap( int *num_1, int *num_2 ){

    // local variable for swap
    int temp = *num_1;

    // swap
    *num_1 = *num_2;
    *num_2 = temp;
}

int partition( int **arr, int low, int high ){

    int pivot = low;
    
    // note:
    // low is inclusive; high is exclusive.

    int i = low - 1;
    int j = high;

    while ( true ){

        // note:
        // to find the index of the first element that's larger than pivot and first smaller than pivot

        // worst case, always itself
        do{
            i++;
        } while ( (*arr)[i] < pivot );

        // worst case, always itself
        do{
            j--;
        } while ( (*arr)[j] > pivot );

        if ( i >= j ){
            return j;
        }

        swap ( &(*arr)[i], &(*arr)[j] );

    }

}

void quick_sort( int **arr, int low, int high ){

    //officially add up everything

    if ( low > high ){
        perror( "invalid input" );
        return;
    }

    int pivot = partition( *arr, low, high);

    quick_sort( *arr, low, pivot - 1);
    quick_sort( *arr, pivot + 1, high);

}