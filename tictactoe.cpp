#include <iostream>
#include<stdlib.h>
#include<cstdlib>

using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};

void board() {
    system("CLS");
    cout<<"\t\t Tic-Tac-Toe\n\n";

    cout<<"\t_______________________"<<"\n";
    cout<<" \t| "<<square[1]<<" \t| "<<square[2]<<" \t| "<<square[3]<<"   |\n";
    cout<<"\t_______________________"<<"\n";
    // cout<<"     |     |     "<<"\n";
    cout<<" \t| "<<square[4]<<" \t| "<<square[5]<<" \t| "<<square[6]<<"   |\n";
    cout<<"\t_______________________"<<"\n";
    // cout<<"     |     |     "<<"\n";
    cout<<" \t| "<<square[7]<<" \t| "<<square[8]<<" \t| "<<square[9]<<"   |\n";
    cout<<"\t_______________________"<<"\n";
    cout<<"\n";
}

int checkWin() {
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' &&
    square[7] != '7' && square[8] != '8' && square[9] != '9' )
        return 0;
    else
        return -1;
}

int main() {
    int player = 1;
    char mark;
    int i;
    int choice;

    do {
        board();
        if (player % 2 == 0)
            player = 2;
        else
            player = 1;
        
        cout<<"Player"<<player<<"Choice:";
        cin>>choice;

        if (player == 1)
            mark = 'X';
        else 
            mark = '0';
        
        if (choice == 1 && square[1] == '1')
            square[1] = mark;
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
        else {
            cout<<"Invalid Move...";
            player--;
            system("pause");
            cin.ignore();
        }
        i = checkWin();
        player++;
    } while (i == -1);

    board();
    if (i == 1)
        cout<<"Player "<<--player<<" Won...";
    else 
        cout<<"Game Draw...!";
}
