1. Getting started

//Learn what C++ is, how it works, and write your first simple programs.

## Variables and basic data types 

#include <iostream>   // Iostream gives access to input/output tools like std::cout

int main() {          // The main function: where the program starts running
    std::cout << "I like pizza!" '\n';  // Prints the text to the console
    return 0;         // Ends the program successfully
}                     // Closing brace for main

// = Is the Comment funtion
/*
  The "/* & */" is the multi line comment
*/

// Cout = Character Output
// The 0 = Means the program can run succesfully
// << = Is the Output Operator

// This should print I like Pizza in the output of your code editor.

2. Varibles and Data Types

// Here are examples of Data Types and Variables used below
    
#include <iostream>

int main() {

    // declaration = creating a variable
    int age;              // declared an integer variable
    double price;         // declared a decimal variable
    char grade;           // declared a single character variable
    std::string name;     // declared a text variable
    bool student;         // declared a true/false variable

    // assignment = giving a variable a value
    age = 21;
    price = 10.99;
    grade = 'A';
    name = "Bro";
    student = true;

    // declaration + assignment = do both at the same time
    int year = 2025;
    double gpa = 2.5;
    char initial = 'J';
    std::string food = "Pizza";
    bool forSale = false;

    // integer (whole number)
    int days = 7;
    int score = 100;
    int players = 2;

    // double (number with decimals)
    double temperature = 25.1;
    double height = 175.5;
    double balance = 99.99;

    // char (single character)
    char letter = 'B';
    char symbol = '$';
    char grade2 = 'A';

    // string (text)
    std::string firstName = "John";
    std::string country = "USA";
    std::string color = "Blue";

    // bool (true or false)
    bool online = true;
    bool completed = false;
    bool isLoggedIn = true;

    std::cout << "Hello " << firstName << ", you are " << age << " years old and your GPA is " << gpa << ".";
    return 0;
}
// Try and make your own sentences with the variables 


3.Const 

#include <iostream>

int main(){
const double PI = 3.14159;
const int LIGHT_SPEED = 299792458;
const int WIDTH = 1920;
const int HEIGHT = 1080;

return 0;
}

//This would prevent any of these values from being changed

// The const keyword specifies that a variable's value is constant tells the compiler to prevent anything from modifying it (read-only)

4. Namespaces

    }

#include <iostream>

namespace first{
int x=1;

namespace second{
int.x=2;

}

int main() {

int x = 0;

std :: cout << second :: x;

return 0;

}

// Namespace = provides a solution for preventing name conflicts
//in large projects. Each entity needs a unique name.
    
//A namespace allows for identically named entities
//as long as the namespaces are different.

5. Typedef and type aliases


#include <iostream>
#include <vector>
#include <string>

// typedef = reserved keyword used to create an additional name (alias)
//            for another data type
typedef std::string text_t;
typedef int number_t;
typedef double decimal_t;
typedef bool status_t;

// using = newer way to create type aliases
using words_t = std::string;
using whole_t = int;
using percent_t = double;
using on_t = bool;

int main() {

    // typedef aliases
    text_t name = "John";
    number_t age = 21;
    decimal_t gpa = 2.5;
    status_t student = true;

    // using aliases
    words_t food = "Pizza";
    whole_t year = 2025;
    percent_t taxRate = 0.07;
    on_t online = false;

    // alias with more complex types
    typedef std::vector<std::string> names_t;
    using scores_t = std::vector<int>;

    names_t friends = {"Alex", "Sam", "Jordan"};
    scores_t scores = {90, 85, 100};

    return 0;
}

    
