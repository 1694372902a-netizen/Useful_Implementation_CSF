#include <menu.h>
// love temari tsukimura

void swap( int *num_1, int *num_2 ){

    // local variable for swap
    int temp = *num_1;

    // swap
    *num_1 = *num_2;
    *num_2 = temp;
}

// the oblivion of one's sadness
int partition( int **arr, int low, int high){

    int pivot = arr[low];

    // inclusive
    int i = low;

    // exclusive
    int j = high;

    while ( i < j ){
        
        //first element that's strictly larger than the pivot, from start
        while ( (*arr)[i] <= p && i <= high - 1){
            i++;
        }
        
        //first element that's strictly smaller than the pivot, from end
        while( (*arr)[j] > p && j >= low + 1 ){
            j--;
        }

        // now i stores the index of the first element that's larger than the pivot
        // j stores the first element that's smaller than the pivot, the index

        // check if i's on the left of j
        if ( i < j ){
            swap( &arr[i], &arr[j] );
        }





    }
}