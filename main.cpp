//Authors: Kial Leite Ryan
#include<iostream>
#include<string>

using namespace std;

int main()
{
    //declare variables
    string first, last;
    string nickname; 
    int lucky;
    //get user input
    cout << "Enter your first name " << endl;
    cin >> first;
    cout << "Enter your last name " << endl;
    cin >> last;                                   
    nickname.push_back (first[0]);
    nickname.push_back ('.');
    nickname.push_back (last[0]);
    nickname.push_back ('.');
    //tell fortune
   cout << "Welcome, " << nickname << " here is your fortune..." << endl; 
   cout << "your lucky number is  " << first.length() << endl;
                                                                    
                                                                    
                                                                    
                                                                    
                                                                    






  return 0;
}
