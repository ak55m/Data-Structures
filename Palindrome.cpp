#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


// this is to find if a word is a palindrome
void palindrome(){

        string theword;

        string reverse_theword;

        cout<<"\nEnter String: ";

        getline(cin, theword); 

        if(theword.empty() == 1){

        cout << "string cannot be empty!"; 

        cout<<"\nEnter String: ";

        getline(cin, theword); 

        }

        int len;

        len = theword.length();

        // this is to reverse the string
        for(int i = len-1; i >= 0; i--){

            reverse_theword.push_back(theword[i]);

        }

        cout<< theword << endl;

        // this is to remove the space in the original word
        theword.erase(std::remove(theword.begin(), theword.end(), ' '), theword.end());

        // this is to remove the space in the reverse word
        reverse_theword.erase(std::remove(reverse_theword.begin(), reverse_theword.end(), ' '), reverse_theword.end());

        cout << reverse_theword;

        // this is to check if the strings are palindrome
        if(theword == reverse_theword){

            cout  << endl << "strings are palindrome";

        }
        return;

}


// function to tokenize the ip address
void tokenize(){

        string ipaddress;

        cout << endl << "\nEnter IP address: ";

        getline(cin, ipaddress); 

        if(ipaddress.empty() == 1){

        cout << "string cannot be empty!"; 

        cout<<"\nEnter IP address: ";

        getline(cin, ipaddress); 

        }

        // replace the periods in the string for a comma
        replace(ipaddress.begin(), ipaddress.end(), '.', ',');

        cout <<"{" << ipaddress << "}";

        return;

}


int main()
{
        // function for question 1
        palindrome(); 

        // function for question 2
        tokenize();

        return 0;
}
