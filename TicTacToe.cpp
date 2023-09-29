#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;
char game[10] = {'0','1','2','3','4','5','6','7','8','9'};

void switch_turns(int change);
void sleep(float seconds);
void display();
int checkwin();

int main(){
  srand(time(NULL));
  int turn = rand() % 2 + 1;
  string p1;
  string p2;

  system("clear");
  cout << "Welcome to Tic Tac Toe!!\n\n";
  cout << "Please enter the name of Player 1\n";
  cin >> p1;
  cout << "\nPlease enter the name Player 2\n";
  cin >> p2;
  cout << "\n";

  system("clear");

  int change = turn;
  int choice;

  while(checkwin() == -1){
    if(turn == 1){
      //system("clear");
      cout << " Tic Tac Toe\n";
      cout << "\n" << p1 << " (X) - " << p2 << " (O)" << "\n\n";
      if(change == 1){
        display();
        cout << p1 << ", Please Select a Number\n";
        cin >> choice;
        system("clear");
        if(choice == 1){
          if(game[1] == '1'){
            game[1] = 'x';
            display();
            system("clear");
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n\n";
            change = 1;
          } 
        }else if(choice == 2){
          if(game[2] == '2'){
            game[2] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }else if(choice == 3){
          if(game[3] == '3'){
            game[3] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }else if(choice == 4){
          if(game[4] == '4'){
            game[4] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }else if(choice == 5){
          if(game[5] == '5'){
            game[5] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }else if(choice == 6){
          if(game[6] == '6'){
            game[6] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }else if(choice == 7){
          if(game[7] == '7'){
            game[7] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }else if(choice == 8){
          if(game[8] == '8'){
            game[8] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }else if(choice == 9){
          if(game[9] == '9'){
            game[9] = 'x';
            change = 2;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 1;
          }
        }
      }else if(change == 2){
          display();
          cout << p2 << ", Please Select a Number\n";
          cin >> choice;
          system("clear");
          if(choice == 1){
            if(game[1] == '1'){
              game[1] = 'o';
              display();
              system("clear");
              change = 1;
            }else{
              cout << "That spot is taken, Try Again\n\n";
              change = 2;
            } 
          }else if(choice == 2){
            if(game[2] == '2'){
              game[2] = 'o';
              change = 1;
            }else{
              cout << "That spot is taken, Try Again\n";
              change = 2;
            }
            }else if(choice == 3){
              if(game[3] == '3'){
                game[3] = 'o';
                change = 1;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 2;
              }
            }else if(choice == 4){
              if(game[4] == '4'){
                game[4] = 'o';
                change = 1;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 2;
              }
            }else if(choice == 5){
              if(game[5] == '5'){
                game[5] = 'o';
                change = 1;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 2;
              }
            }else if(choice == 6){
              if(game[6] == '6'){
                game[6] = 'o';
                change = 1;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 2;
              }
            }else if(choice == 7){
              if(game[7] == '7'){
                game[7] = 'o';
                change = 1;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 2;
              }
            }else if(choice == 8){
              if(game[8] == '8'){
                game[8] = 'o';
                change = 1;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 2;
              }
            }else if(choice == 9){
              if(game[9] == '9'){
                game[9] = 'o';
                change = 1;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 2;
              }
            }
        }
    }else{
      //sleep(2.0);
      //system("clear");
      cout << "\n Tic Tac Toe\n\n";
      cout << "\n" << p2 << " (X) - " << p1 << " (O)" << "\n\n";
      if(change == 2){
        display();
        cout << p2 << ", Please Select a Number\n";
        cin >> choice;
        system("clear");
        if(choice == 1){
          if(game[1] == '1'){
            game[1] = 'x';
            display();
            system("clear");
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n\n";
            change = 2;
          } 
        }else if(choice == 2){
          if(game[2] == '2'){
            game[2] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }else if(choice == 3){
          if(game[3] == '3'){
            game[3] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }else if(choice == 4){
          if(game[4] == '4'){
            game[4] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }else if(choice == 5){
          if(game[5] == '5'){
            game[5] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }else if(choice == 6){
          if(game[6] == '6'){
            game[6] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }else if(choice == 7){
          if(game[7] == '7'){
            game[7] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }else if(choice == 8){
          if(game[8] == '8'){
            game[8] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }else if(choice == 9){
          if(game[9] == '9'){
            game[9] = 'x';
            change = 1;
          }else{
            cout << "That spot is taken, Try Again\n";
            change = 2;
          }
        }
      }else if(change == 1){
          display();
          cout << p1 << ", Please Select a Number\n";
          cin >> choice;
          system("clear");
          if(choice == 1){
            if(game[1] == '1'){
              game[1] = 'o';
              display();
              system("clear");
              change = 2;
            }else{
              cout << "That spot is taken, Try Again\n\n";
              change = 1;
            } 
          }else if(choice == 2){
            if(game[2] == '2'){
              game[2] = 'o';
              change = 2;
            }else{
              cout << "That spot is taken, Try Again\n";
              change = 1;
            }
            }else if(choice == 3){
              if(game[3] == '3'){
                game[3] = 'o';
                change = 2;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 1;
              }
            }else if(choice == 4){
              if(game[4] == '4'){
                game[4] = 'o';
                change = 2;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 1;
              }
            }else if(choice == 5){
              if(game[5] == '5'){
                game[5] = 'o';
                change = 2;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 1;
              }
            }else if(choice == 6){
              if(game[6] == '6'){
                game[6] = 'o';
                change = 2;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 1;
              }
            }else if(choice == 7){
              if(game[7] == '7'){
                game[7] = 'o';
                change = 2;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 1;
              }
            }else if(choice == 8){
              if(game[8] == '8'){
                game[8] = 'o';
                change = 2;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 1;
              }
            }else if(choice == 9){
              if(game[9] == '9'){
                game[9] = 'o';
                change = 2;
              }else{
                cout << "That spot is taken, Try Again\n";
                change = 1;
              }
            }
        }
    }
  }

  if(checkwin() == 1 && turn == 1 && change == 2){
    cout << "Game Over\n\n";
    cout << p1 << " is the Winner!\n";
  }else if(checkwin() == 1 && turn == 1 && change == 1){
    cout << "Game Over\n\n";
    cout << p2 << "is the Winner!\n";
  }else if(checkwin() == 1 && turn == 2 && change == 2){
    cout << "Game Over\n\n";
    cout << p2 << " is the Winner!\n";
  }else if(checkwin() == 1 && turn == 2 && change == 1){
    cout << "Game Over\n\n";
    cout << p1 << " is the Winner!\n";
  }else if(checkwin() == 0){
    cout << "It's a Draw\n";
    cout << "Please play again!\n";
  }

}


void display(){

  cout << "     |     |     " << "\n";
  cout << "  " << game[1] << "  |  " << game[2] << "  |  " << game[3] << "\n";

  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";

  cout << "  " << game[4] << "  |  " << game[5] << "  |  " << game[6] << endl;

  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";

  cout << "  " << game[7] << "  |  " << game[8] << "  |  " << game[9] << endl;

  cout << "     |     |     " << "\n\n";
}

//function to delay code from appearing before previous code is able to display
void sleep(float seconds){
  clock_t startClock = clock();
  float secondsAhead = seconds * CLOCKS_PER_SEC;
  // do nothing until the elapsed time has passed.
  while(clock() < startClock+secondsAhead);
  return;
}

int checkwin()
{
    if (game[1] == game[2] && game[2] == game[3])
        return 1;
    else if (game[4] == game[5] && game[5] == game[6])
        return 1;
    else if (game[7] == game[8] && game[8] == game[9])
        return 1;
    else if (game[1] == game[4] && game[4] == game[7])
        return 1;
    else if (game[2] == game[5] && game[5] == game[8])
        return 1;
    else if (game[3] == game[6] && game[6] == game[9])
        return 1;
    else if (game[1] == game[5] && game[5] == game[9])
        return 1;
    else if (game[3] == game[5] && game[5] == game[7])
        return 1;
    else if (game[1] != '1' && game[2] != '2' && game[3] != '3' && game[4] != '4' && game[5] != '5' && game[6] != '6' && game[7] != '7' && game[8] != '8' && game[9] != '9')
        return 0;
    else
        return -1;
}

