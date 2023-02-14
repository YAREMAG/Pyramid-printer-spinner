//
//  main.cpp
//  Assn1
//
//  Created by Jeremy Ganushchak on 2/14/23.
//

#include <iostream>
#include <iomanip>
using namespace std;

//Probably need multiple functions one for each direction. So north west south east
//first function north takes the number given to make a vertical pyramid.
void north(int number){
    int counter = 1; //counter is used to make pyramid symmetrical with blanks
    for(int i = 1; i <= (number * 2)-1; i += 2){ // for loop starts at one until it reaches the base
        cout << string(number-counter,' '); // each level down has two more stars
        cout << string(i,'*');
        cout << string(number-counter,' ') << "\n";
        counter++;
    }
}
void length(int number){ // function made just to print the length of the string, utilized for other
    cout << string(number,'*') << "\n"; // directions
}

void west(int number){
    int blanks = number -1;
    //first for loop print top of pyramid
    for (int i = 1; i <= number-1; i++ ){
        cout << string(blanks , ' ');
        cout << string(i,'*') << "\n";
        blanks--;
    }
    length(number);
    blanks = 1;
    //second for loop prints bottom half of pyramid
    for (int i = number -1; i >= 1; i--){
        cout << string(blanks,' ');
        cout << string(i, '*') << "\n";
        blanks++;
    }
}

void south(int number){
    int counterSouth = number; //counter is used to make pyramid symmetrical with blanks
    for(int i = number*2 -1; i >= 1; i -= 2){ // for loop starts at one until it reaches the base
        cout << string(number-counterSouth,' ');
        cout << string(i,'*');
        cout << string(number-counterSouth,' ') << "\n";
        counterSouth--;
    }
}

void east(int number){
    int blanks = number -1;
    //first for loop print top of pyramid
    for (int i = 1; i <= number-1; i++ ){
        cout << string(i, '*') ;
        cout << string(blanks , ' ') << "\n";
        blanks--;
    }
    length(number);
    blanks = 1;
    //second for loop prints bottom half of pyramid
    for (int i = number -1; i >= 1; i--){
        cout << string(i, '*');
        cout << string(blanks,' ') << "\n";
        
        blanks++;
    }
}

int main() {
    int number;
    const string STAR = "*";
    
    do{
        cout<<"Enter an Integer Between 2 and 25: ";
        cin>>number;
    }
    while( number <= 2 || number >= 25);
    north(number);
    west(number);
    south(number);
    east(number);
    cout<<"Press any key to continue . . . ";
    system("read");
    return 0;
}
