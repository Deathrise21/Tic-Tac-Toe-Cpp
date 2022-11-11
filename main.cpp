#include <iostream>

using std::cout;
using std::endl;
using std::cin;

std::string play;
std::string a1,a2,a3,b1,b2,b3,c1,c2,c3;
std::string move;

bool validOption = false;
bool gameOver = false;
bool A1,A2,A3,B1,B2,B3,C1,C2,C3;
int player = 1;
bool ValidMove = false;


bool validMove(bool space) {

    if (space == true) {
        cout << "Space already taken! You lose your turn for trying to be smart \n";
    }   else  {
        return false;
    }
    return true;
}

int main() {

    A1 = A2 = A3 = B1 = B2 = B3 = C1 = C2 = C3 = false;
    a1 = a2 = a3 = b1 = b2 = b3 = c1 = c2 = c3 = "_";

    while (validOption == false) {
        cout << "Would you like to play tic tac toe? Y/N ";
        cin >> play;

        if ((play == "Y") || (play == "y")) {
            cout << "True" << endl;
            validOption = true;
        }   else if ((play == "N") || (play == "n")) {
            cout << "Well you don't have rights so your playing" << endl;
            validOption = true;
        }   else {
            cout << "Invalid Option! Try again" << endl;
        }
    }

    while (gameOver == false){

    

    cout << ("   1   2   3 ") << endl;
    cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
    cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
    cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;

    cout << "Player " << player <<" make your move: "; 
    cin >> move;
    
    if (move == "A1" || move == "a1") {
        ValidMove = validMove(A1);
    }   if (move == "A2" || move == "a2") {
        ValidMove = validMove(A2);
    }   if (move == "A3" || move == "a3") {
        ValidMove = validMove(A3);
    }   if (move == "B1" || move == "b1") {
        ValidMove = validMove(B1);
    }   if (move == "B2" || move == "b2") {
        ValidMove = validMove(B2);
    }   if (move == "B3" || move == "b3") {
        ValidMove = validMove(B3);
    }   if (move == "C1" || move == "c1") {
        ValidMove = validMove(C1);
    }   if (move == "C2" || move == "c2") {
        ValidMove = validMove(C2);
    }   if (move == "C3" || move == "c3") {
        ValidMove = validMove(C3);
    }

    //player 1 movement checks and changes
    if (player == 1) {
        if (move == "A1" && ValidMove == false|| move == "a1" && ValidMove == false) {
            a1 = "X";
            A1 = true;
        }   if (move == "A2" && ValidMove == false || move == "a2" && ValidMove == false) {
            a2 = "X";
            A2 = true;
        }   if (move == "A3" && ValidMove == false || move == "a3" && ValidMove == false) {
            a3 = "X";
            A3 = true;
        }   if (move == "B1" && ValidMove == false || move == "b1" && ValidMove == false) {
            b1 = "X";
            B1 = true;
        }   if (move == "B2" && ValidMove == false || move == "b2" && ValidMove == false) {
            b2 = "X";
            B2 = true;
        }   if (move == "B3" && ValidMove == false || move == "b3" && ValidMove == false) {
            b3 = "X";
            B3 = true;
        }   if (move == "c1" && ValidMove == false || move == "c1" && ValidMove == false) {
            c1 = "X";
            C1 = true;
        }   if (move == "C2" && ValidMove == false || move == "c2" && ValidMove == false) {
            c2 = "X";
            C2 = true;
        }   if (move == "C3" && ValidMove == false || move == "c3" && ValidMove == false) {
            c3 = "X";
            C3 = true;
        }
    }

    //player 2 movement checks and changes
    if (player == 2) {
        if (move == "A1" && ValidMove == false || move == "a1" && ValidMove == false) {
            a1 = "O";
            A1 = true;
        }   if (move == "A2" && ValidMove == false || move == "a2" && ValidMove == false) {
            a2 = "O";
            A2 = true;
        }   if (move == "A3" && ValidMove == false || move == "a3" && ValidMove == false) {
            a3 = "O";
            A3 = true;
        }   if (move == "B1" && ValidMove == false || move == "b1" && ValidMove == false) {
            b1 = "O";
            B1 = true;
        }   if (move == "B2" && ValidMove == false || move == "b2" && ValidMove == false) {
            b2 = "O";
            B2 = true;
        }   if (move == "B3" && ValidMove == false || move == "b3" && ValidMove == false) {
            b3 = "O";
            B3 = true;
        }   if (move == "c1" && ValidMove == false || move == "c1" && ValidMove == false) {
            c1 = "O";
            C1 = true;
        }   if (move == "C2" && ValidMove == false || move == "c2" && ValidMove == false) {
            c2 = "O";
            C2 = true;
        }   if (move == "C3" && ValidMove == false || move == "c3" && ValidMove == false) {
            c3 = "O";
            C3 = true;
        }
    }

    if (player == 1){
        player++;
    }   else {
        player--;   
    }
    

    if (c1 == "O" && c2 == "O" && c3 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }    if (b1 == "O" && b2 == "O" && b3 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }   if (a1 == "O" && a2 == "O" && a3 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }   if (c3 == "O" && b3 == "O" && a3 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }   if (c2 == "O" && b2 == "O" && a2 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }   if (c1 == "O" && b1 == "O" && a1 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }   if (c3 == "O" && b2 == "O" && a1 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }   if (a3 == "O" && b2 == "O" && c1 == "O" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 2 Wins!!!";
    }   if (c3 == "X" && c2 == "X" && c1 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }   if (b3 == "X" && b2 == "X" && b1 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }   if (a3 == "X" && a2 == "X" && a1 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }   if (c3 == "X" && b3 == "X" && a3 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }   if (c2 == "X" && b2 == "X" && a2 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }   if (c1 == "X" && b1 == "X" && a1 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }   if (c3 == "X" && b2 == "X" && a1 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }   if (c1 == "X" && b2 == "X" && a3 == "X" ){
        gameOver = true;
        cout << ("   1   2   3 ") << endl;
        cout << "A _" + a1 + "_|_" + a2 +"_|_" + a3 + "_" << endl;
        cout << "B _" + b1 + "_|_" + b2 +"_|_" + b3 + "_" << endl;
        cout << "A _" + c1 + "_|_" + c2 +"_|_" + c3 + "_" << endl;
        cout << "Player 1 Wins!!!";
    }
    
    

    }

    cout << endl;
    system("pause");
    return 0;
}
    

    
