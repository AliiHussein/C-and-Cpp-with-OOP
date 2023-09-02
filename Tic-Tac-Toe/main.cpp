#include <iostream>
using namespace std;

// global variables 
unsigned char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
unsigned char current_maker = 'X';
unsigned int current_player = 1;
unsigned int rounds = 0;
bool isWinner = false;

// Functions prototypes
void draw_board(void);
void change_players(void);
void winner_check(void);

int main(){

    // Game initialization
    int number;
    draw_board();

    while (1)
    {
        cout << "Player " << current_player << " turn" << endl;

        cout << "Enter a number: ";
        cin >> number;


        if(number < 1 || number > 9){
            cout << "Invalid number/place, out of bounds" << endl;
            continue;
        }

        if((board[0][number-1] == 'X') || (board[0][number-1] == 'O')){
            cout << "Place already taken, choose another place" << endl;
            continue;
        }

        
        board[0][number-1]= current_maker;
        cout << endl;
        cout << endl;
        draw_board();
        rounds++;


        winner_check();

        if(isWinner){
            break;
        }

        if(rounds == 9){
            cout << "DRAW" << endl;
            break;
        }

        change_players();
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

void change_players(){
    if(current_maker == 'X'){
        current_maker = 'O';
        current_player = 2;
    }
    else{
        current_maker = 'X';
        current_player = 1;
    }
}

void winner_check(){
    if(rounds < 5){
        return;
    }

    // Rows
    if((board[0][0] == board[0][1]) &&(board[0][1] == board[0][2])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    }
    else if((board[1][0] == board[1][1]) &&(board[1][1] == board[1][2])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    }
    else if((board[2][0] == board[2][1]) &&(board[2][1] == board[2][2])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    }

    // columns
    else if((board[0][0] == board[1][0]) &&(board[1][0] == board[2][0])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    }
    else if((board[0][1] == board[1][1]) &&(board[1][1] == board[2][1])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    }
    else if((board[0][2] == board[1][2]) &&(board[1][2] == board[2][2])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    }

    // Diagonals
    else if((board[0][0] == board[1][1]) &&(board[1][1] == board[2][2])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    }
    else if((board[0][2] == board[1][1]) &&(board[1][1] == board[2][0])){
        cout << "Player "<< current_player << " is the winner" << endl;
        isWinner = true;
    } 

}