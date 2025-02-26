#include <stdio.h>
#include <stdlib.h>

#define TITLE_LENGTH 50  // Define max length for game titles

// Define a struct to represent a video game
struct videoGame {
    char gameTitle[TITLE_LENGTH];  // Game title (string)
    int gameID;  // Unique game identifier
    int releaseYear;  // Release year of the game
};

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage: %s <number_of_games>\n", argv[0]);
        return 1;
    }

    int num_games = atoi(argv[1]); // Get the number of games from command line

    // Allocate memory for 'num_games' videoGame structures
    struct videoGame* gameArray = (struct videoGame*)malloc(num_games * sizeof(struct videoGame));

    if (gameArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("\nEnter details for %d video games (Title, Game ID, Release Year):\n", num_games);
    
    // Loop to collect game information
    for (int i = 0; i < num_games; i++) {
        printf("\nGame %d:\n", i + 1);

        printf("Enter Game Title (Max %d chars): ", TITLE_LENGTH - 1);
        while (getchar() != '\n');  // Properly flush input buffer before fgets
        fgets(gameArray[i].gameTitle, TITLE_LENGTH, stdin);

        printf("Enter Game ID: ");
        scanf("%d", &gameArray[i].gameID);

        printf("Enter Release Year: ");
        scanf("%d", &gameArray[i].releaseYear);
    }

    // Display all stored game records
    printf("\nList of Video Games Entered:\n");
    for (int i = 0; i < num_games; i++) {
        printf("\nGame %d: %sGame ID: %d | Release Year: %d",
               i + 1, gameArray[i].gameTitle, gameArray[i].gameID, gameArray[i].releaseYear);
    }

    printf("\n");

    free(gameArray); // Free allocated memory
    return 0;
    
}

/*

WHAT TO DO

MODIFY THIS CODE

Instead of a stupid example structure (really this is the best you could think of Joe - "myStruct", "myInt", come on man)

Update this code to do something more...real world.

For examle:

Maybe create a structure like this:

struct book {

    char bookTitle[10];
    int bookNumber;
    int bookPages;

};

Example data might be (remember we're just making stuff up here)  Here title is some made-up title.  A made up inventory number.  A made up number of pages (not a very big book...).

bookTitle - Joe's Life
bookNumber - 1234
bookPages - 23


*/