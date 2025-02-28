// In this example, when the user runs the program they have to specify how big they want the allocation to be.
// The allocation is going to store integers
// So you'd run it like this:
//   ./program-name 5
// Thusly it allocates space for 5 integers: 32-bits/4-bytes each.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int num_elements;
    
    // Prompt the user until a valid number is entered
    while (1) {
        printf("Enter the initial number of elements: ");
        if (scanf("%d", &num_elements) == 1 && num_elements > 0) {
            break; // Exit loop if input is valid
        }
        printf("Invalid input. Please enter a positive number.\n");
        while (getchar() != '\n'); // Clear input buffer
    }

    // Initial memory allocation
    int *array = (int *)malloc(num_elements * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    int count = 0;  // Tracks how many elements have been entered
    int capacity = num_elements; // Tracks current allocated memory size

    printf("Start entering numbers (enter -1 to stop):\n");

    while (1) {  // Infinite loop for continuous input
        int value;
        printf("Enter a number: ");
        if (scanf("%d", &value) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear buffer
            continue;
        }

        // Stop condition
        if (value == -1) {
            break;
        }

        // If array is full, resize using realloc()
        if (count >= capacity) {
            capacity *= 2; // Double the capacity
            int *temp = realloc(array, capacity * sizeof(int));
            if (temp == NULL) {
                printf("Memory reallocation failed.\n");
                break;
            }
            array = temp; // Assign reallocated memory
        }

        // Store the new value
        array[count++] = value;

        // Print the updated array
        printf("Current numbers in the array: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    // Free memory before exiting
    free(array);
    printf("Memory freed. Program exited.\n");

    return 0;
    
}

/* 

WHAT TO DO:

MODIFY THIS CODE

Continue to prompt the user for the number of elements.  This will be the "starting size" of the allocated memory

Replace the FOR loop for entering numbers into the array with a never ending WHILE loop.

Continuously prompt the user to enter more numbers. 

Continuously check to see how big the array is getting.

For example, the user specified to start with 5 items in the allocated memory.

They've now entered 5 items and want to add a 6th.

We now need to resize and move the array.   

What do we need to do?

Research and come up with a solution.

Use the guide and examples at W3SCHOOLS. It has a good example of using reallocate.

Another good example is in file 7-managing-allocation-with-struct.case

You don't need to write code like that example, but look at how they do it in the "addToList" function.

Indeed you can see what CoPilot says (I would prefer you use CoPilot) to.

But you must understand why the solution works. Don't copy/paste.

Write a short paragraph about your approach and why is solves the problem.

Modify the code with your approach/code and make it work.

*/