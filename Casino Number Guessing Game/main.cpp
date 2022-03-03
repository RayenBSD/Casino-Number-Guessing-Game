#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdbool>
using namespace std;

int main () {
    srand(time(0));
    char *name = new char[50];
    
    int amount, num;
    bool loop;

    cout<< "if you guess the number you get 20$ but if you did not you lose 10$"<< endl;
    cout<< "the number is between 0-10"<< endl;

    cout<< "enter your name: "; cin.getline(name, 50, '\n');
    cout<< "enter your amount: "; cin>> amount;
    (amount >= 10) ? loop = 1 : loop = 0;

    cout<< "Welcome, "<< name<< " to our game"<< endl;
    while (loop) {

        int random = (0+rand()%(10-0+1));
        cout<< "your guess: "; cin>> num;

        if (num == random) {
            cout<< "well, you did it"<< endl;
            amount += 20;
            cout<< "Amount: "<< amount<< endl;
        }
        else {
            cout<< "the correct answer is: "<< random<< endl;
            amount -= 10;
            cout<< "Amount: "<< amount<< endl;
        }
        if (amount < 10) {
            cout<< "you need more money to play"<< endl;
            loop = 0;
        }
    }
    cout<< "you need 10$ at least to play"<< endl;
}