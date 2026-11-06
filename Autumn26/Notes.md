# Notes for Programming for EEE

>Notes covers from week 2 to week 6

## Week 2: Basics
### Basic IO

For input and output, use:
```cpp
std::cout << //output goes towards cout
std::cin >> //input goes from cin to var
std::endl //use this to end line and flush output buffer
```

### Basic variable types
Variables for the most part, can only perform operations on the same type
```cpp
int a; //Self explanatory, integer. If by divided by a value to give a decimal, it will drop the decimal part
double b; //Double the storage of int, 8 bytes vs 4 bytes, can store decimal
std::string s; //String of characters, including whitespaces
bool c; //Either true or false, or 0 or 1, can act as both
```

### Math Operations
```cpp
+ - * / //Basic operations
a%b //modulo, gives remainder of a/b
+= -= *= /= //Assignment operators, assigns a value after the operation
i++ i-- //Increment operators, adds or subtracts 1
```

### Conditionals
> For operations, use ==, !=, >, <, and so on for a boolean output
```cpp
if (operation){ // outcome of operation should be a boolean type, so result() runs if true 
    result()
}
else if (operation2){

}
else{

}
```
### Special notes
- Do not use namespace std, it can mix different methods with the same name\
- Always remember to add your semicolon 





## Week 3: Loops

Loops are effective for tasks that require repeated actions

### While Loops
```cpp
while(condition){ // basically what you see, while condition is true, do()
    do()
}
```
> Do make sure that your condition will eventually become false, else you will hang with an infinite loop

### For Loops
```cpp
for (int i = 0; i < n; i++){ // 3 parts, define, condition, increment. Any of the 3 can be empty, just make sure you have 2 semicolons
    do()
}
```

### For vs While
For loops are easier to control, and usually won't cause infinite loops if u follow the format\
While loops can be good for cases where you want i to be accessible outside the loop\
Generally I use for 

### Special Notes
- Each loop has something called scope while it is alive, so if you declare a variable in the loop, once it is finished running, the variable will be terminated. Mostly is the i that you use.\
- Also make sure that at any time within the loop, only one variable of that name exists in the scope. Don't use int i and have another i outside the loop, it confuses things. Also for nested loops, use another variable name for the nested loops




## Week 4: Functions

### Function Basics
Basic format
```cpp
// return type      name of function    input parameter type    input parameter name
double              myabs               (double                 in){
    //do whatever
}
// return types can be variable types, int, std::string, std::vector etc
// it can also be null type void, meaning it does not return any values
```
Functions:
- Functions have scope, which isolates its internal values from the rest of your code
- Functions use parameters and return values to communicate with the rest of the code
- Parameters can be used as input, or output (Passing by reference)
- Functions generally don't print anything, but it is good habit to debug by placing print statements to see the flow of the function
- If there is a loop in your function, and you don't want to go through all the cases in the function, you can just put a conditional return or early return to stop the function (and the loop)

Forward Declaration
```cpp
int abs(blahblah); // This is a forward declaration, it tells main that the function exists, just not neccessarily before main
int main(){
    abs(varname)
}

int abs(blahblah){blah blah do smsth} // This is the function DEFINITION, which specifies how the function actually works
```

### Passing by copy vs Passing by reference
Take a look at the code below:
```cpp
int imsogay(int a, int& b){ // Here you see that b has an & beside the type, that is passing by reference
    gaythingstodo;
}

imsogay(x,y)
```

#### What is the actual difference
- Passing by copy copies the value of the parameter x to a, so whatever is done to a has no effect on x, because it is a copy
- Passing by reference lets the function edit the values of y, even though it is named b within the function
- The points is whether you want the parameter's values to be changed or not, and you can add a const prefix if u really don't want it to be changed





## Week 5: Vectors
A vector is a collection of variables of the same type that are contained in adjacent memory cells

### Vectors Basics
```cpp
#include <vector>   // REMEMBER TO INCLUDE HEADER FOR VECTOR
std::vector<type> v; // Vector declaration
v.push_back(1);     // Adds a 1 to the back of the vector
n = v.size();       // Outputs the size of the vector, which is the last index + 1
v[0];               // Accesses the value stored at index 0 of the vector. This can give undefined behaviour if the value given in the brackets is outside the range of the vector
v.at(0);            // Instead of using [], .at() will throw an exception if the value is out of bounds, at least the behaviour will be defined well
v[0] = 15;          // How to assign values at the position
v.at(0) = 15;       // This also works for assigning values
std::vector<type> v2{0,1,2,3} // A way to quickly assign values at declaration
v2 = {0,1,2,3,4,5}  //Another way to assign values
```

### Vectors as inputs
```cpp
double functionname(std::vector<int> thisisexpensive){}
double functionname2(std::vector<int>& cheapbuteditable){}
double functionname3(const std::vector<int>& cheapandconstant){}
```
Consider the 3 function declarations above:
- First function passes vector as copy, which can be computationally expensive for large vectors because it has to copy the whole thing
- Second is slightly better, as you dont have to copy the entire vector, but the function can now make edits on the values in the vector
- Third is best, passing by const reference is efficient and does not allow the function to edit it


### Vectors as outputs
There are 2 main ways to output to vectors:
- Using the assignment methods ,eg push_back, at etc
- Passing by reference and use the above methods within the function



## Week 6: Text files
Often times, we store data in text files, so it is useful to open .txt files for reading or writing

### Input
```cpp
#include <fstream> //remember this file stream library

std::ifstream infile; //this object represents the text file, with type std::ifstream
infile.open("input.txt"); // Assigns the stuff inside the text file to the object

// We still need to know if the file was opened correctly
#include <cstdlib> // for EXIT_FAILURE
#include <iostream>

if(!infile.is_open()){ // note the !: "if the file is not open"...
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE; // Early return if failed
}

int tmp; // This is generally the way to read the file data into a vector for use
while(infile >> tmp){
    v.push_back(tmp); 
}

infile.close() // Don't forget to close the file after extracting data

```

### Output
```cpp
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream outfile; // Object of type std::ofstream

    outfile.open("output.txt");
    // this will associate outfile to a file called output.txt
    // if the file doesn't exist it is created
    // if the file already exists it will be overwritten!

    if(!outfile.is_open()){ // The usual stuff
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    outfile << "hello" << std::endl; // writes to the output file

    outfile.close();
}
```

### Special Notes
- We can index std::strings like vectors, but each value at the index has type char
- chars if general have format ' ' instead of " ", and they include whitespaces as char, like space, tab and \n
- In general I fucking malded over the spacing, and for operations, make sure both your vars are the same type, which char can cause quite a few problems
- To convert char to string, you can create a function to return a string, with char as parameter, and push_back the char into the string