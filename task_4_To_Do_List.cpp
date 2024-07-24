#include<iostream>
#include<windows.h>
using namespace std ; 

void print_tasks( string tasks[] , int task_count ){
    cout << "Tasks to do : " << endl ; 
    cout << "-------------------------------------" << endl ;
    for ( int i = 0 ; i < task_count ; i++ ){
        cout << "Task " << i << " is : " << tasks[i] << endl ;
    }
    cout << "-------------------------------------" << endl ;
}  


int main()
{
    system("colors a") ;
    string tasks[10] =  {""} ;
    int task_count = 0 ;

    int option = -1 ;

    while(option != 0 ){
        cout << "\t\t\t\t\t----------Welcome to the To-Do-list----------\n" ;
        cout << "\t\t\t\t\t----------1) To Add New Tasks----------\n" ;
        cout << "\t\t\t\t\t----------2) To View Tasks----------\n" ;
        cout << "\t\t\t\t\t----------3) To Delete the Tasks----------\n" ;
        cout << "\t\t\t\t\t----------4) To terminate the program----------\n" ;
        cout << "Enter your option : " ;
        cin >> option ;

        switch(option){
            case 1 : 
            {
                if ( task_count > 9 ){
                    cout << "Task list is full" << endl ;
                }
                else{
                    cout << "Enter a new task : " ; 
                    cin.ignore() ;
                    getline(cin,tasks[task_count]) ;
                    task_count++ ;
                }
                break ;
            }
            case 2 : 
            {
                system("cls") ;
                print_tasks(tasks,task_count) ;
                break ;
            }
            case 3 : 
            {
                system("cls") ;
                print_tasks(tasks,task_count) ;
                int delete_tasks = 0 ;
                cout << "Enter a task to delete : " ; 
                cin >> delete_tasks  ;

                if ( delete_tasks < 0 || delete_tasks > 9 ){
                    cout << "You have entered the wrong task number" << endl ;
                    break ;
                }
                for ( int i = delete_tasks ; i < task_count ; i++ ){
                    tasks[i] = tasks[i+1] ;
                }
                task_count-- ;
                break ;
            }
            case 0 :
                cout << "Terminating the program- ---- " << endl ;
                break ;
            default : 
                cout << "You have entered the invalid value" << endl ;
                break ;
        }
    }
    cout << "\nTo Do list program terminated\n" ;
    return 0 ; 
}