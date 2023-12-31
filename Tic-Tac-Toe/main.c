#include <stdio.h>

// global variables 
unsigned char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
unsigned char current_marker = 'X';
unsigned int current_player = 1;
unsigned int rounds = 0;
char isWinner = 0;

// Functions prototypes
void draw_board(void);
void change_players(void);
void winner_check(void);
void choose_your_marker(void);

int main(){

    // Game initialization
    choose_your_marker();
    int number;
    draw_board();

    while (1)
    {
        printf("Player %d turn\n", current_player);

        printf("Enter a number: ");
        scanf("%d", &number);

        if(number < 1 || number > 9){
            printf("Invalid number: Choose a number between 1 & 9\n");
            continue;
        }

        if((board[0][number-1] == 'X') || (board[0][number-1] == 'O')){
            printf("Place already taken, choose another place\n");
            continue;
        }

        
        board[0][number-1]= current_marker;
        printf("\n");
        printf("\n");
        draw_board();
        rounds++;


        winner_check();

        if(isWinner){
            break;
        }

        if(rounds == 9){
            printf("DRAW");
            break;
        }

        change_players();
    }
    
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

void change_players(){
    if(current_marker == 'X'){
        current_marker = 'O';
    }
    else{
        current_marker = 'X';
    }

    if(current_player == 1){
        current_player = 2;
    }
    else{
        current_player = 1;
    }
}

void winner_check(){
    if(rounds < 5){
        return;
    }

    // Rows
    if((board[0][0] == board[0][1]) &&(board[0][1] == board[0][2])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    }
    else if((board[1][0] == board[1][1]) &&(board[1][1] == board[1][2])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    }
    else if((board[2][0] == board[2][1]) &&(board[2][1] == board[2][2])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    }

    // columns
    else if((board[0][0] == board[1][0]) &&(board[1][0] == board[2][0])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    }
    else if((board[0][1] == board[1][1]) &&(board[1][1] == board[2][1])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    }
    else if((board[0][2] == board[1][2]) &&(board[1][2] == board[2][2])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    }

    // Diagonals
    else if((board[0][0] == board[1][1]) &&(board[1][1] == board[2][2])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    }
    else if((board[0][2] == board[1][1]) &&(board[1][1] == board[2][0])){
        printf("Player %d is the winner\n", current_player);
        isWinner = 1;
    } 

}

void choose_your_marker(){
    unsigned int marker;

    printf("1 -> X,  2 -> O\n");
    printf("Choose your marker: ");
    scanf("%d", &marker);

    if(marker == 1){
        current_marker = 'X';
        printf("Player 1 -> X\n");
        printf("Player 2 -> O\n");
    }
    else{
        current_marker = 'O';
        printf("Player 1 -> O\n");
        printf("Player 2 -> X\n");
    }
    printf("\n");
    printf("Game Started\n");
    printf("\n");
}