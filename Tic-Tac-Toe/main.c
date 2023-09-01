#include <stdio.h>

// global variables 
char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
unsigned char current_maker;
unsigned char current_player;

// Functions prototypes
void draw_board(void);

int main(){
    int number;

    printf("%c", board[0][4]);

    // while (1)
    // {
    //     printf("Player 1 turn\n");
    //     printf("Enter a number: ");
    //     scanf("%d", &number);
    //     board[number]= 'x';
    //     draw_board();
    // }
    
    return 0;
}

// Function to draw the current board
void draw_board(){
    for(int i = 0; i < 3; i++){
        printf(" | ");
        for(int j = 0; j < 3; j++){
        printf("%c | ", board[i][j]);
        }
        printf("\n");
    }
}