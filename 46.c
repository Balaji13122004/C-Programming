#include <stdio.h>
#include <stdlib.h>

// function to calculate the mean
float calculate_mean(int array[], int size){
    float sum = 0;
    for(int i = 0; i < size; i++){
        sum += array[i];
    }
    return sum/size;
}

// function to calculate the median
int calculate_median(int array[], int size){
    int median = 0;
    int temp;

    // sort the array
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // calculate the median
    if(size%2 == 0){
        median = (array[size/2] + array[size/2 - 1])/2;
    }
    else{
        median = array[size/2];
    }

    return median;
}

// function to calculate the mode
int calculate_mode(int array[], int size){
    int mode = array[0];
    int count = 1;
    int max_count = 1;

    // find the mode
    for(int i = 0; i < size; i++){
        count = 1;
        for(int j = i+1; j < size; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count > max_count){
            max_count = count;
            mode = array[i];
        }
    }

    return mode;
}

int main(){
    int array[] = {16, 18, 27, 16, 23, 21, 19};
    int size = sizeof(array)/sizeof(array[0]);

    float mean = calculate_mean(array, size);
    int median = calculate_median(array, size);
    int mode = calculate_mode(array, size);

    printf("Mean = %0.0f\n", mean);
    printf("Median = %d\n", median);
    printf("Mode = %d\n", mode);

    return 0;
}
