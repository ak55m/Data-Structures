#include <iostream>
#include <string>
using namespace std;

// this is the first question
class student{

    private:
    int admno;
    string sname;
    float eng, math, science, total;
    
    float ctotal(float eng, float math, float science){
        return eng + math + science;

    }

    public: 

        void showData(){


            cout << endl << "Admin number is " << admno << endl;


            cout << "Student name is " << sname << endl;



            cout << "The sum is " << total  ;


        }

        void takeData(){

            string names;

            cout << "Enter student name: ";

            getline (cin, names);



            int number; 

            cout << "Enter the admin number: ";

            cin >> number;



            int num;

            float value1, value2, value3;

            cout << "Enter the english score: ";

            cin >> value1;



            cout << "Enter the math score: ";

            cin >> value2;




            cout << "Enter the science score: ";

            cin >> value3;



            admno = number;

            sname = names;

            eng = value1;

            math = value2;

            science = value3;


            float sum;

            sum = ctotal(eng, math, science);

            total = sum;

        }

};

int main(){

    student result;

    result.takeData();

    result.showData();

    return 0;

}



// this is the second question for class books
class BOOK{

    private:
        int Book_NO;
        string BOOKTITLE;
        float PRICE;

        float TOTAL_COST(int n){
            return PRICE * n;
        }

    public: 

        INPUT() {

            string book_title;

            cout << "Enter book name: ";

            getline (cin, book_title);

            BOOKTITLE = book_title;


            int book_no;

            cout << "Enter the book_no: ";

            cin >> book_no;

            Book_NO = book_no;


            float price; 

            cout << "Enter the price: ";

            cin >> price;

            PRICE = price;


        }

        PURCHASE() {
                       

            int n; float purchase_cost; 

            cout << "Enter the number of books: ";

            cin >> n;

            purchase_cost = TOTAL_COST(n);

            cout << endl << "The total cost for "<< n << " " << BOOKTITLE << " book(s) is $" << purchase_cost; 


        }


};

int main(){

    BOOK buy;

    buy.INPUT();

    buy.PURCHASE();

    return 0;

}



// this marks the start of the third question
class Distance{

    private: 
        int feet;
        float inches; 

    public: 
        void set(int a, float b){

            feet = a;

            inches = b;
        }

        void set2(int x, float y){

            
            feet = x;

            inches = y;
        }



        Distance add(Distance);

        void disp();


};

Distance Distance::add(Distance dist2) {

    Distance dist1;

    dist1.inches=inches + dist2.inches;

    dist1.feet = 0;

        if(dist1.inches >= 12.0){

        dist1.inches -= 12.0;

        dist1.feet++;
        
        }

    dist1.feet += feet + dist2.feet;

    dist1.feet;

    return dist1;

  
}

void Distance::disp(){

                cout << feet << "ft. " << inches << "in.";

}

int main(){

    Distance first_distance, second_distance, sum_distance;

    first_distance.set(10, 1.7);

    second_distance.set(5, 5.1);

    sum_distance = first_distance.add(second_distance);

	cout<< endl <<"distance 1 = ";first_distance.disp();

	cout<< endl <<"distance 2 = ";second_distance.disp();

    cout << endl << "new distance = ";sum_distance.disp();

    return 0;

}
