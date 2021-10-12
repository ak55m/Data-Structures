#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <array>
using namespace std;

// for question 1
void question1(){

    array<int, 10> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    array<int, 10> arr2 = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};

    cout << "The first element is " << arr1.front() << " and the last element is " << arr1.back() << endl;

    cout << endl << "Before the swap happens" << endl;

    for (int i = 0; i < 10; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 10; i++){
        cout << arr2[i] << " ";
    }
    cout << endl <<endl;

    arr1.swap(arr2); // this swaps the arrays

    cout << "After the swap happens" << endl;

    for (int i = 0; i < 10; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 10; i++){
        cout << arr2[i] << " ";
    }
    cout << endl << endl;

    cout << "The size of the first array is " << arr1.size() << endl;
    cout << "The size of the second array is " << arr2.size() << endl;


}

// for question 2a
void question2a(){

    std::vector<int> vector01, vector02;
    int input, n;


    std::cout << "Please enter the number of elements: ";
    cin >> n;

    // This is for question 1.
    std::cout << "Now enter the elements " << endl;

    for (int i = 0; i < n; i++){
        std::cin >> input;
        vector01.push_back(input);

    }

    // copying the vector1 into similar vector2
    for (int i = 0; i < vector01.size(); i++){
        
        vector02.push_back(vector01[i]);

    }

    // the array is non sorted
    cout << endl << "Non sorted array: ";
    for (auto i = vector01.begin(); i != vector01.end(); ++i)
        cout << *i << " ";

    // this sorts the array
    sort(vector02.begin(), vector02.end());

    cout << endl << "Sorted array: ";
    for (auto sorted : vector02)
        cout << sorted << " ";

}


// for question 2b
void question2b(){

    float percentage, otherpercentage;

    int size1 = 110; // size 

    std::vector<int> randvector(size1, 0); // random 110 element

    std::vector<int> randvector2 = {5,6,23,92,75,8,63,66,50,30}; // vector with 10 elements 

    int input;

    float counter;

    counter = 0;

    srand(time(0));

    generate(randvector.begin(), randvector.end(), rand);

    cout << endl << "The 100 elements are: ";

    // prints atleast 100 random elements in a vector
    for (int i = 0; i < size1; i++) {

        randvector[i] = randvector[i]%100; // for numbers between 0 to 100

        cout << randvector[i] << " ";
    }

    cout << endl << "The 10 elements are: ";

    // prints out 10 element vector
    for (int i = 0; i < 10; i++){

    cout << randvector2[i] << " ";
    }



    for (int i = 0; i < 10; i++ ){ // iterate through the first array

        for (int j = 0; j < size1; j++) { // iteratre through the second array

            if (randvector[j] == randvector2[i]) {

                counter++; // count when the number in bigger array appears in smaller array

                break; // stop counting when found to prevent counting duplicates

            }
        }
    }

    // printing out the answers
    cout << endl;
    
    cout << endl << "There are " << counter << " element(s) in the second vector that appear in the first vector";

    percentage = counter/10*100; // to calculate percentage of elements in the smaller vector in the larger vector
    
    cout << endl << "The percentage of elements in the vector is " << percentage << "%";

    otherpercentage = 100 - percentage; // to calculate the rest of the elements in smaller vector not in larger vector

    cout << endl << "The percentage of elements not in the vector is " << otherpercentage << "%" << endl; 



}

// this is for question 2c 2d 2e
void question2c2d2e(){

    //2c. checks if the size of the vectors are equal
    std::vector<int> vector01 = {31,6,23,8,8,8,66,66,70,30,70};
    std::vector<int> vector02 = {5,6,23,92,75,8,63,66,50,30};

    // std::vector<int> vector03;

    // if statements to print the message when the vector is equal or not
    if(vector01.size() == vector02.size()){

        cout << "These vectors are equal!" << endl;

    } else if(vector01.size() != vector02.size()) {

        cout << "These vectors are not equal!" << endl;

    }


    //2d. this is to find how many times an element in the vector appears
    char start;

    int num;

    cout << endl;

    cout << "Enter y to start: ";


    // taking input to start program
    cin >> start;

    while(start == 'y'){

        cout << "Enter number to find duplicated: ";

        cin >> num;

        // finds how many times the number appear
        cout << "Number of times " << num << " appears is " << count(vector01.begin(), vector01.end(), num) << endl;

        cout << "Enter y to start: ";

        cin >> start;

    }


    //2e. this is to merge the two sorted vectors
    sort(vector01.begin(), vector01.end());

    sort(vector02.begin(), vector02.end());

    vector<int> vector03(vector01.size() + vector02.size());

    vector<int>::iterator it, st;

    it = set_union(vector01.begin(),vector01.end(),vector02.begin(), vector02.end(), vector03.begin());

    cout << endl << "The two merged vectors are:" << endl;

    for (st = vector03.begin(); st != it; ++st)

        cout << *st << ", ";

    cout << '\n';

}


int main() {

    question1();

    question2a();

    question2b();

    question2c2d2e();

    return 0;

}
