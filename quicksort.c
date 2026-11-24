#include <menu.h>

void swap( int *num_1, int *num_2 ){

    // local variable for swap
    int temp = *num_1;

    // swap
    *num_1 = *num_2;
    *num_2 = temp;
}

int partition( int **arr, int low, int high ){

    int pivot = (*arr)[low];

    // note:
    // both low and high are included indices.

    int i = low - 1;
    int j = high + 1;

    while ( true ){

        // find the first element >= pivot
        do{
            i++;
        } while ( (*arr)[i] < pivot );

        // find the first element <= pivot
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

    // officially add up everything

    if ( low >= high ){
        return;
    }

    int boundary = partition( arr, low, high );

    quick_sort( arr, low, boundary );
    quick_sort( arr, boundary + 1, high );

}