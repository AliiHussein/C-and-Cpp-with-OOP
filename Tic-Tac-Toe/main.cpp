#include <iostream>
using namespace std;

// global variables 
unsigned char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
unsigned char current_maker = 'X';
unsigned int current_player = 1;

// Functions prototypes
void draw_board(void);

int main(){
    int number;

    while (1)
    {
        cout << "Player " << current_player << " turn" << endl;
        draw_board();
        cout << "Enter a number: ";
        cin >> number;
        board[0][number-1]= current_maker;
        if(current_maker == 'X'){
            current_maker = 'O';
            current_player = 2;
        }
        else{
            current_maker = 'X';
            current_player = 1;
        }
    }
    
    return 0;
}

// Function to draw the current board
void draw_board(){
    for(int i = 0; i < 3; i++){
        cout << " | ";
        for(int j = 0; j < 3; j++){
        cout << board[i][j] << " | ";
        }
        cout << endl;
    }
}