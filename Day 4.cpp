//operation on data .........
#include <iostream>
using namespace std;

//rational operators


int rat_opt() {

    cout << "..............Example of rational operation.........." << endl << endl;
    int number1{ 45 };
    int number2{ 60 };
    cout << "number1" << number1 << endl;

    cout << "number2" << number1 << endl;
    cout << endl;
    cout << "Comparing variables" << endl;
    cout << boolalpha<<endl; // Make bool show up as true/false instead of 1/0
    //Stress the need for parentheses here
    std::cout << "numberl < number2 : " << (number1 < number2) << endl;

    return 0;


}



//increment and decremet program

int int_dec() {
    cout << "......................increment and Decrement oprerations .................." << endl << endl;

    int a = 5;
    int b = 10;

    //.............................postfix increment and decerement.......
    // 
    //increment
    cout << "the incremented value is ..." << a++ << endl;
    cout << "the  value is ..." << a << endl;

    //decrement
    cout << "the decremented value is ..." << b-- << endl;
    cout << "the  value is ..." << b<< endl;

    //..............................prefix increment and decerement..............

    //increment
    cout << "the incremented value is ..." << ++a << endl;
    cout << "the  value is ..." << a << endl;

    //decrement
    cout << "the decremented value is ..." << --b << endl;
    cout << "the  value is ..." << b << endl;

    //we can increment and decerement the value more than one time 

    int value{ 23 };
    // for addition
    value += 5;
    cout << "increment of value by 5 is" << value;
    cout << endl;
    // we can also perform different operstion by using this procedure


    // for multiplication
    value *= 5;
    cout << "increment of value by 5 is" << value;
    cout << endl;

    // for subtration
    value -= 5;
    cout << "increment of value by 5 is" << value;
    cout << endl;


    // for division
    value /= 5;
    cout << "increment of value by 5 is" << value;
    cout << endl;

    // for modulous
    value %= 5;
    cout << "increment of value by 5 is" << value;
    cout << endl;


    return 0;
}

//presedence order
//rules we know that what operation wehave to perform first
//associativity : to which direction i have to go
int presedance() {
    int a{ 10 };
    int b{ 1 };
    int c{ 6 };
    int d{ 4 };
    int e{ 11 };
    int f{ 2 };

    int x = a - b / c * d + e % f;

    cout << ".....................Precidence program..................." << endl << endl;
    cout << "the answer of c is :" << x << endl;
    return x;
}


int main()

{
    ///basic operations:
    int a{ 10 };
    int b{ 31 };
    cout << "......................use of basic operations......................." << endl << endl;
    //addition
    int c;
    c = a + b;
    cout << "sum is : " << c << endl;
    //subtract
    c = b - a;
    cout << "sub is : " << c << endl;
    //multiple
    c = a * b;
    cout << "mul is : " << c << endl;
    //division
    c = b / a;
    cout << "division  is : " << c << endl;
    //modulus
    c = b % a;
    cout << "modulous is : " << c << endl;




    //calling a function
    presedance();
    int_dec();
    rat_opt();


}

