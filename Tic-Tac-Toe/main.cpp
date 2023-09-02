#include <iostream>
using namespace std;

// global variables 
unsigned char board[3][3] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
unsigned char current_maker = 'X';
unsigned int current_player = 1;
unsigned int rounds = 0;

// Functions prototypes
void draw_board(void);
void change_players(void);
void game_check(void);

int main(){
    int number;

    while (1)
    {
        cout << "Player " << current_player << " turn" << endl;

        draw_board();

        cout << "Enter a number: ";
        cin >> number;

        cout << endl;
        cout << endl;

        if(number < 1 || number > 9){
            cout << "Invalid number/place, out of bounds" << endl;
            continue;
        }

        if((board[0][number-1] == 'X') || (board[0][number-1] == 'O')){
            cout << "Place already taken, choose another place" << endl;
            continue;
        }

        
        board[0][number-1]= current_maker;
        rounds++;

        if(rounds == 9){
            cout << "DRAW" << endl;
            break;
        }

        game_check();
        

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

void game_check(){
    if(rounds < 5){
        return;
    }
    cout << "I entered" << endl;
}