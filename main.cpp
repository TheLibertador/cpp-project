//This program draws pyramid and star or computes the Fibonacci numbers according to users selection.

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int taskselection = 0 ;
    int pyramidheight = 0 ;
    int starsize = 0 ;
    long unsigned int first_num = 0 ;
    long unsigned int second_num = 1 ;
    long unsigned int user_index = 0 ;
    long unsigned int sum = 0 ;

    cout<<"Welcome to my first C++ program !" << endl ;

    do { // Loop for returning main menu when the task is done.


    do { //The loop for returning main menu when user enters invalid value.


         cout<<"Please select a task to perform (-1 to exit) : " << endl ;
         cout<<" 1) Draw a pyramid \n 2) Draw a star \n 3) Calculate the Fibonacci numbers " << endl ;


        cin>> taskselection ;

        switch(taskselection) {

            case 1 :

                do{

                    cout<< "please enter the pyramid height.(it must be between 1 - 40)"<< endl ;
                    cin>> pyramidheight ;

                  if(pyramidheight > 0 && pyramidheight < 41 ){

                    for(int i = 1; i <= pyramidheight; i++) {

                        for(int space = i; space < pyramidheight; space++){
                            cout << " ";
                        }

                    for(int j = 1; j <= (2 * i - 1); j++) {
                        cout << "*";
                    }
                        cout << "\n";
                }
             }


                else {
                    cout<< "You have entered invalid invalid height.\n " << endl ;
                }
            } while(pyramidheight < 0 || pyramidheight > 40 ) ;


                    break ;
            case 2 :

                do {
                    cout<<"Please enter the size of star. (It must be between 1 - 20 )" << endl ;

                    cin>> starsize ;

                    if (starsize > 0 && starsize < 21) {
                          for (int row = 1; row <= starsize * 2 + 1; row++) {
                            for (int coloumn = 1; coloumn <= starsize * 2 + 1; coloumn++) {

                                if (row == coloumn){
                                    cout << "*";
                            }
                    else if (row + coloumn == starsize * 2 +2){
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
                cout << endl;
                    } else{
                        cout<< "You have entered invalid size.\n" ;
                  }

                }while( starsize < 0 || starsize >= 21) ;



                break ;
            case 3 :
                do{
                    cout<< "Please enter the index of the Fibonacci number to be computed(between 0-47): " ;
                    cin>> user_index ;
                    cout<< "\n " ;
                    if(user_index >= 0 && user_index <= 47){
                    if(user_index == 1){
                        cout<<"Fibonacci number is : " << user_index << endl ;
                            break ;
                    }

                    for( unsigned int f = 1 ; f < user_index ; f++) {


                        sum = first_num + second_num ;

                        first_num = second_num;

                        second_num = sum ;

                }  cout<< "Fibonacci number is : " << sum << endl ;
            } else{
                cout<< "You have entered invalid number.\n" ;
          }
        } while(user_index < 0 || user_index > 47) ;

                break ;
            case -1 :

                cout<< "Thank you for trying my program!"<< endl ;

                break ;

            default :
                cout<< "You have entered an invalid selection.\n" ;

                break ;
         }

      } while(taskselection != 1 && taskselection != 2 && taskselection != 3 && taskselection != -1 ) ;



  }while(taskselection != -1) ;

}
