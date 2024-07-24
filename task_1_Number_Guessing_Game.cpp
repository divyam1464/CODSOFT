#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ; 

int main()
{

    cout << "\n\t\t\t\t\t----------Welcome to the Number Guessing Game[1-100]----------" << endl ;
    string player_name ;
    cout << "Enter your Name : " ;
    getline(cin,player_name) ;

    char wanna_play_further ;
    cout << endl ;
    do{
        srand(time(0)) ;
        int secret_number_generated = ( rand() % 100 ) + 1   ;

        int player_choice ;
        while(true){
            cout << "Entered the number you would expect : " ;
            cin >> player_choice ;
            cout << endl ;

            if( player_choice == secret_number_generated ){
                cout << "\t\t\t\t\tWell played you won the game " << secret_number_generated << " was the secret number generated " << endl ;
                cout << "\t\t\t\t\tThanks for playing ! ......." << endl ;
                cout << "\t\t\t\t\tPlay the game again with us......" << endl ;
                break ;
            }
            else{
                if ( player_choice > secret_number_generated )
                    cout << "The secret number is smaller than the number you entered\n" ;
                else
                    cout << "The secret number is greater than the number you entered\n" ;
            }
        }

        cout << "Do you wanna play further : " ;
        cin >> wanna_play_further ;

    } while ( wanna_play_further != 'N') ;

    cout << "Game over..!\nThanks for playing with us :) \nr̥" ;
    
    cout << endl ;
    return 0 ; 
}