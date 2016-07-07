#include <cstdlib>
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class randomNumber{
public:
    int ranNumber(){
        int ranNam, max;
        srand(time(0));
        max = 10;
        ranNam = (rand () % max) + 1;
        return ranNam;
    }
};

class Play{
public:
    void playGame(){
        bool game = true;
        while (game) {
            int x,num;
            string gameSit;
            randomNumber rannum;
            x = rannum.ranNumber();
            cout << "Pick a number 0 - 10 \n";
            cin >> num;
            if(x == num){
                cout << "Correct! \nYour guess " << num << " was correct!\n";
            }
            else{
                cout << num << " was incorrect \n";
                cout << "The correct number was " << x << "\n";
            }
            cout << "Would you like to continue game(y/n)? \n";
            cin >> gameSit;
            if (gameSit == "n") {
                game = false;
            }
            else if(gameSit == "y"){
                game = true;
            }
            else if(gameSit != "y" || gameSit != "n"){
                bool inLoop = true;
                while  (inLoop){
                    cout << "Invalid option!" << "\n";
                    cout << "Would you like to continue game(y/n)? \n";
                    cin >> gameSit;
                    if (gameSit == "n") {
                        game = false;
                        inLoop = false;
                    }
                    else if(gameSit == "y"){
                        game = true;
                        inLoop = false;                    }
                }
            }
        }
    }
};


int main(){
    Play game;
    game.playGame();
    return 0;
}