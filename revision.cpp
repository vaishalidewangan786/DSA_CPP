#include<iostream>
using namespace std;

void topic1(), topic2(), topic3(), topic4(), topic5(), topic6(), topic7(), topic8(), topic9(), topic10();
int main();
void command_01(){
    cout<<"Enter The Topic Number You Wanna Revise:"<<endl;
    int input;
    cin>>input;
    switch (input)
    {
    case 1 : topic1();
        break;
    case 2 : topic2();
        break;    
    case 3 : topic3();
        break;
    case 4 : topic4();
        break;
    case 5 : topic5();
        break;
    case 6 : topic6();
        break;
    case 7 : topic7();
        break;
    case 8 : topic8();
        break;
    case 9 : topic9();
        break;
    case 10 : topic10();
        break;
    default:
        cout<<"Kuch Dhang Ka Type Karlo Madam"<<endl;
        main();5
    }
}

int main(){
    cout<<endl<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"[\tWHEN COMMAND IS ASKED: \t\'-1\' IS BACKWARDS \t\'0\' IS MAIN MENU \t\'1\' IS FORWARD\t]"<<endl;
    cout<<endl<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"\t>>>>Hello Rupal, Chalo Tumhara Revision Karate Hain!!!<<<<"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Jo Jo Aap Ab Tak Padh Chuki Ho Wo Dekho: "<<endl<<endl;
    cout<<"1. Basic Introduction:\t Variables, Literals, Data Types, Basic I/O, Type Conversion/Casting, Operators, Comments."<<endl;
    cout<<"2. Flow Control:\t if..else if..else, for loop, while loop, do-while loop, break/continue, switch, goto."<<endl;
    cout<<"3. Functions:\t Introduction, Library Functions, Overloading, Default Argument, Local/Global/Static Variable."<<endl;
    cout<<"4. Recursion:\t Introduction."<<endl;
    cout<<"5. Arrays:\t Declaration/Initialization, Data accessing[index], multidimensional"<<endl;
    cout<<"6. Pointers:\t Declaration/Initialization"<<endl;
    cout<<"7. Reference:\t Introduction."<<endl;
    cout<<"8. [>>Bonus: Functions & Arrays <<]:\tAccessing Arrays in fuction through pointers and then reference "<<endl;
    cout<<"9. Structure: Introduction, Passing struct to functions, accessing variables of struct using pointers"<<endl;
    cout<<"10. Structure Se Class Tak Ka Safar:\t Declaration/Initialization of class"<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Upcoming Topics: OOPs Concept[Classes, Objects, Constructor/Destructor, passing objects to functions, operator overloading], Inheritance, Memory Management, Exception Handling, Enumeration etc etc..."<<endl;
    cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
    command_01();
    return 0;
}

void topic1(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 01\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"\nBasic Introduction:"<<endl;
cout<<"\nVariables: a variable is a container (storage area) to hold data\n for example: int age = 14;\t age is a variable of the int data type, and we have assigned an integer value 14 to it."<<endl;
cout<<"\nLiterals: Literals are data used for representing fixed values \t for example: 1, 2.5, \'c\', \"Shivam\", true/false etc"<<endl;
cout<<"\nIntegers: An integer is a numeric literal(associated with numbers) without any fractional or exponential part. There are three types of integer literals in C programming;\n decimal (base 10) = 0,octal (base 8) = 021,hexadecimal (base 16) = 0x7f"<<endl;
cout<<"\nFloating-point Literals: A floating-point literal is a numeric literal that has either a fractional form or an exponent form.\n For example:-2.0,0.0000234,-0.22E-5"<<endl;
cout<<"\nCharacters: A character literal is created by enclosing a single character inside single quotation marks.\n For example: \'a\', \'m\', \'F\', \'2\', \'}\' etc"<<endl;
cout<<"\nEscape Sequences: Sometimes, it is necessary to use characters that cannot be typed or has special meaning in C++ programming.\n For example, newline (enter), tab, question mark, etc."<<endl;
cout<<"\nString Literals: A string literal is a sequence of characters enclosed in double-quote marks.\n For example:\"good\" = string constant,  \"\" = null string constant"<<endl;
cout<<"\nC++ Constants: In C++, we can create variables whose value cannot be changed. For that, we use the const keyword.\n  Here's an example: const int LIGHT_SPEED = 299792458;  LIGHT_SPEED = 2500 // Error! LIGHT_SPEED is a constant"<<endl;
cout<<"\nC++ Data Types: In C++, data types are declarations for variables. This determines the type and size of data associated with variables.\n  For example, int age = 13; the variable can only store integers of either 2 or 4 bytes."<<endl;
cout<<"\nC++ Fundamental Data Types:int	Integer 	2 or 4, float	Floating-point 	4"<<endl;
cout<<"\nC++ int: The int keyword is used to indicate integers.\n Its size is usually 4 bytes. Meaning, it can store values from -2147483648 to 2147483647.\n For example: int salary = 85000"<<endl;
cout<<"\nC++ float and double: float and double are used to store floating-point numbers (decimals and exponentials).\n The size of float is 4 bytes and the size of double is 8 bytes. Hence, double has two times the precision of float. To learn more, visit C++ float and double.\n For example: float area = 64.74; double volume = 134.64534;"<<endl;
cout<<"\nC++ char: Keyword char is used for characters.Its size is 1 byte.Characters in C++ are enclosed inside single quotes, \n For example: char test = 'h'"<<endl;
cout<<"\nC++ wchar_t: Wide character wchar_t is similar to the char data type, except its size is 2 bytes instead of 1.It is used to represent characters that require more memory to represent them than a single char.\n For example: wchar_t test = L'?'  // storing Hebrew character"<<endl;
cout<<"\nC++ bool: The bool data type has one of two possible values: true or false. Booleans are used in conditional statements and loops (which we will learn in later chapters).\n For example: bool cond = false;"<<endl;
cout<<"\nC++ void: The void keyword indicates an absence of data. It means \"nothing\" or \"no value\"."<<endl;
cout<<"\nC++ Type Modifiers: There are 4 type modifiers in C++. They are: signed, unsigned, short, long.\n We can modify the following data types with the above modifiers:int, double, char"<<endl;
cout<<"\nC++ Modified Data Types List: Lets see this with the help of example:\n long b = 4523232;long int c = 2345342;\n long double d = 233434.56343;\n short d = 3434233;\n  // Error! out of range unsigned int a = -5;\n // Error! can only store positive numbers or 0"<<endl;
cout<<"\nDerived Data Types: Data types that are derived from fundamental data types are derived types.\n For example: arrays, pointers, function types, structures, etc"<<endl;
cout<<"\nC++ Output: In C++, cout sends formatted output to standard output devices, such as the screen. We use the cout object along with the << operator for displaying output"<<endl;
cout<<"\nC++ Input: In C++, cin takes formatted input from standard input devices such as the keyboard. We use the cin object along with the >> operator for taking input."<<endl;
cout<<"\nC++ Type Conversion: C++ allows us to convert data of one type to that of another. This is known as type conversion.There are two types of type conversion in C++:Implicit Conversion, Explicit Conversion (also known as Type Casting)"<<endl;
cout<<"\nImplicit Type Conversion: The type conversion that is done automatically done by the compiler is known as implicit type conversion"<<endl;
cout<<"\nC++ Explicit Conversion: When the user manually changes data from one type to another, this is known as explicit conversion.\n There are three major ways in which we can use explicit conversion in C++. They are: C-style type casting (also known as cast notation),Function notation (also known as old C++ style type casting),Type conversion operators"<<endl;
cout<<"\nC-style Type Casting: As the name suggests, this type of casting is favored by the C programming language. It is also known as cast notation."<<endl;
cout<<"\nFunction-style Casting: We can also use the function like notation to cast data from one type to another.\n The syntax for this style is:data_type(expression);"<<endl;
cout<<"\nType Conversion Operators: Besides these two type castings, C++ also has four operators for type conversion. They are known as type conversion operators.\n They are: static_cast, dynamic_cast, const_cast, reinterpret_cast"<<endl;
cout<<"\nC++ Operators: Operators are symbols that perform operations on variables and values.\n For example, + is an operator used for addition, while - is an operator used for subtraction."<<endl;
cout<<"\nC++ Arithmetic Operators: Arithmetic operators are used to perform arithmetic operations on variables and data.\n For example,a + b; \n Similarly there are various other arithmetic operators in C++"<<endl;
cout<<"\nIncrement and Decrement Operators: C++ also provides increment and decrement operators: ++ and -- respectively.++ increases the value of the operand by 1, -- decreases it by 1\n For example;  int num = 5;\n // increment operator\n ++num;  // 6\n Here, the code ++num; increases the value of num by 1"<<endl;
cout<<"\nC++ Assignment Operators: In C++, assignment operators are used to assign values to variables. \n For example,: // assign 5 to a\n a = 5;"<<endl;
cout<<"\nC++ Relational Operators: A relational operator is used to check the relationship between two operands.\n For example: // checks if a is greater than b, a > b;\n Here, > is a relational operator. It checks if a is greater than b or not."<<endl;
cout<<"\nC++ Logical Operators: Logical operators are used to check whether an expression is true or false. If the expression is true, it returns 1 whereas if the expression is false, it returns 0. In C++, logical operators are commonly used in decision making"<<endl;
cout<<"\nC++ Bitwise Operators: In C++, bitwise operators are used to perform operations on individual bits. They can only be used alongside char and int data types."<<endl;
cout<<"\nOther C++ Operators: C++ comments are hints that a programmer can add to make their code easier to read and understand."<<endl;
cout<<"\nSingle Line Comments: In C++, any line that starts with // is a comment.\n For example: // declaring a variable, int a;"<<endl;
cout<<"\nMulti-line comments: In C++, any line between /* and */ is also a comment."<<endl;
cout<<"\n----------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n -----------------------------------------------------------------------------\n Let\'s See some of the Primitive Data Types:\n\n :::::First See the Integers:::::\n\n So, As we know, __int32 = int = long = 2147483647\n And, long long = __int64 = 9223372036854775807\n\n By Default, all data types are signed and their range varies from { -2^(sizeof(datatype) to 2^(sizeof(datatype)-1)}\n And, when we unsign anything, its range goes from (0 to 2*prev_range + 1)\n\n For example, signed long or simply long or int or signed int or __int32 (32bits) has max value = 2147483647        \n But, unsigned long or unsigned int or unsigned __int32 has max value equal to 4294967295\n\n And, signed long long or simply long long or __int64 (64bits) has max value = 9223372036854775807\n But, unsigned long long has max value equal to 18446744073709551615\n\n :::::Now Let\'s See Some Other Primitive Data Types Also:::::\n\n ::\"char\"::\n The size of char is 1 byte or (4 bits), and I am SK\n Size of char is 1 and size of wchar_t is 2 bits.\n See, if we do char x = \'a\' or char y = 97, both show same thing i.e. a\n\n ::\"Boolean\"::\n The size of Boolean is 1 byte\n For Turu, bool will show 1, and for False, bool will show 0\n\n ::\"Double & Float\"::\n Size of Float is 4bytes or 32bits, and For Double, its 8 bytes or 64bits.\n Max of float can take upto 3.4e+38, And double can take upto 1.7e+308\n\n -----------------------------------------------------------------------------"<<endl;


cout<<"Enter the command[0 for main menu, 1 for next topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic2();
else {cout<<"Yeh kya daba di ho yrr, 0 or 1 mese koi ek dabana tha..."<<endl; topic1();}   
}
void topic2(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 02\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"\n !!!!!!!!!!!!!!!!!!!!!!!!!!![if...else if.....else]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n if (condition1) {\n     // code block 1\n }\n else if (condition2){\n     // code block 2\n }\n else {\n     // code block 3\n }\n !!!!!!!!!!!!!!!!!!!!!!!!!!![nested if else]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n // outer if statement\n if (condition1) {\n     // statements\n\n     // inner if statement\n     if (condition2) {\n        // statements\n     }\n }\n !!!!!!!!!!!!!!!!!!!!!!!!!!![for loop]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n for (initialization; condition; update) {\n     // body of-loop \n }\n !!!!!!!!!!!!!!!!!!!!!!!!!!![while]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n while (condition) {\n     // body of the loop\n }\n !!!!!!!!!!!!!!!!!!!!!!!!!!![do-while]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n do {\n    // body of loop;\n }\n while (condition);\n !!!!!!!!!!!!!!!!!!!!!!!!!!![break/continue]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n >>>the break statement terminates the loop when it is encountered.(break;)\n >>> the continue statement is used to skip the current iteration of the loop \nand the control of the program goes to the next iteration.(continue;)\n !!!!!!!!!!!!!!!!!!!!!!!!!!![switch statement]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n switch (expression)  {\n     case constant1:\n         // code to be executed if \n         // expression is equal to constant1;\n         break;\n\n     case constant2:\n         // code to be executed if\n         // expression is equal to constant2;\n         break;\n         .\n         .\n         .\n     default:\n         // code to be executed if\n         // expression doesn't match any constant\n }\n !!!!!!!!!!!!!!!!!!!!!!!!!!![goto]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n goto label;\n ... .. ...\n ... .. ...\n ... .. ...\n label: \n statement;\n ... .. ...\n [Example]:\n # include <iostream>\n using namespace std;\n\n int main()\n {\n     float num, average, sum = 0.0;\n     int i, n;\n\n     cout << \"Maximum number of inputs: \";\n     cin >> n;\n\n     for(i = 1; i <= n; ++i)\n     {\n         cout << \"Enter n\" << i << \": \";\n         cin >> num;\n       \n         if(num < 0.0)\n         {\n           // Control of the program move to jump:\n             goto jump;\n         } \n         sum += num;\n     }\n    \n jump:\n     average = sum / (i - 1);\n     cout << \"\nAverage = \" << average;\n     return 0;\n }"<<endl;

cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic3();
else if(input==-1) topic1();
else {cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic2();}
}
void topic3(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 03\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n !!!!!!!!!!!!!!!!!!!!!!!FUNCTIONS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n The syntax to declare a function is:\n \n returnType functionName (parameter1, parameter2,...) {\n     // function body   \n }\n ---------------------------------------------------\n Function declaration example:\n\n void greet() {\n     cout << \"Hello World\";\n }\n >>>>>HERE<<<<<<<\n the name of the function is greet()\n the return type of the function is void\n the empty parentheses mean it doesn't have any parameters\n the function body is written inside {}\n ---------------------------------------------------\n Calling a function:\n int main() {      \n     // calling a function   \n     greet(); \n \n }\n ----------------------------------------------------\n Passing Parameter To Function:\n void printNum(int num) {\n     cout << num;\n }\n int main() {\n     int n = 7;\n     \n     // calling the function\n     // n is passed to the function as argument\n     printNum(n);\n     \n     return 0;\n }\n ------------------------------------------------------\n Return Statement(Functions with return type other than void):\n #include <iostream>\n \n using namespace std;\n \n // declaring a function\n int add(int a, int b) {\n     return (a + b);\n }\n \n int main() {\n \n     int sum;\n     \n     // calling the function and storing\n     // the returned value in sum\n     sum = add(100, 78);\n \n     cout << \"100 + 78 = \" << sum << endl;\n \n     return 0;\n }\n \n :::::::::OUTPUT:::::::::::::::\n 100 + 78 = 178\n -----------------------------------------------------\n In C++, the code of function declaration should be before the function\n  call. However, if we want to define a function after the function call,\n  we need to use the function prototype. For example,\n \n // function prototype\n void add(int, int);\n \n int main() \n     // calling the function before declaration.\n     add(5, 3);\n     return 0\n }\n \n // function definition\n void add(int a, int b) {\n     cout << (a + b);\n }\n ------------------------------------------------------\n C++ Library Functions:\n Library functions are the built-in functions in C++ programming.\n Some common library functions in C++ are sqrt(), abs(), isdigit(), etc.\n e.g.\n #include <iostream>\n #include <cmath>\n using namespace std;\n \n int main() {\n     double number, squareRoot;\n     \n     number = 25.0;\n \n     // sqrt() is a library function to calculate the square root\n     squareRoot = sqrt(number);\n \n     cout << \"Square root of \" << number << \" = \" << squareRoot;\n \n     return 0;\n }\n -------------------------------------------------------\n !!!!!!!!!!!!!!!!!!!!!!!!!!!!!FUNCTIONS OVERLOADING!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n In C++, two functions can have the same name if the number and/or \n type of arguments passed is different.\n These functions having the same name but different arguments are \n known as overloaded functions. For example:\n \n // same name different arguments\n int test() { }\n int test(int a) { }\n float test(double a) { }\n int test(int a, double b) { }\n ---------------------------------------------------------"<<endl;
cout<<"Defalt Argument is just that: if there is a function with more than one parameter,\n and you just passed parameters less than the actual number, first parameter will be\n assigned, then second will be assigned and so on...till the no. of parameter you passed,\n the rest parameters will be empty since you haven't send anyone"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Static Variable: A static local variable exists only inside a function where it is declared (similar to a local variable) but its lifetime starts when the function is called and ends only when the program ends.\nThe main difference between local variable and static variable is that, the value of static variable persists the end of the program."<<endl;
cout<<"\n #include <iostream>\n using namespace std;\n\n void test()\n {\n     // var is a static variable\n     static int var = 0;\n     ++var;\n\n     cout << var << endl;\n }\n\n int main()\n {\n    \n     test();\n     test();\n\n     return 0;\n }\n::::::::::OUTPUT:::::::::::::\n1\n2"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic4();
else if(input==-1) topic2();
else { cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic3();}    
}
void topic4(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 04\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"A function that calls itself is known as a recursive function"<<endl;
cout<<"Working of Recursion Fns: \n\n void recurse()\n {\n     ... .. ...\n     recurse();\n     ... .. ...\n }\n\n int main()\n {\n     ... .. ...\n     recurse();\n     ... .. ...\n }"<<endl;
cout<<"Let\'s See An Example of Recursive Function:\n\n #include <iostream>\n using namespace std;\n\n int factorial(int);\n\n int main() {\n     int n, result;\n\n     cout << \"Enter a non-negative number: \";\n     cin >> n;\n\n     result = factorial(n);\n     cout << \"Factorial of \" << n << \" = \" << result;\n     return 0;\n }\n\n int factorial(int n) {\n     if (n > 1) {\n         return n * factorial(n - 1);\n     } else {\n         return 1;\n     }\n }"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic5();
else if(input==-1) topic3();
else {cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic4();}    
}
void topic5(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 05\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n:::::Lets see some basic things about Arrays:::::\n\n Well, C++ Arrays Decalaration is done as:\n dataType arrayName[arraySize];\n\n For Example: int x[4]; \\where 4 is the size of the array\n Also, Remember, the position no. of arrays start from 0, so whatever be its position\n its index will be one less than its actual position\n\n For example, in-> int x[6]={10,20,30,40}\n  x[0]=10 \n  x[1]=20 \n  x[2]=30 \n  x[3]=40 \n  x[4]=0 \n  x[5]=0\n\n To See the elements of an array, you can perform a for loop and see how by default value is always 0\n\n Element 1 is 10\n Element 2 is 20\n Element 3 is 30\n Element 4 is 40\n Element 5 is 0\n Element 6 is 0\n Now See You can make an array of any data type, like doing char y[100]={\'a\',\'b\',.....}; \n  string y[2]={\"hello\", \"world\"};\n FYI, string we use just like any data type, but its not actually a data type, but a CLASS, we see this later...\n So as you have seen how to create array list of int, char, string, you can make for float or double also....   \n Also, you have seen index is 1 less than the actual position of the data\n And, by default value of any array is 0 \n Okay Byeee\n\n Ruko Zara Sabar karo, what if you wanna make a list of lists\n Then comes multidimensional Arrays in play\n\n See 2D Array::::\n While Declaring int y[2][5]={{10,20,30,40,50},{60,70,80,90,100}};\n first 2 says there will be 2 lists, both carrying 5 elements each\n if you wanna know/find the 80(say), then first go to second list and 3rd element\n But as the index is one less, so position of 80 will be y[1][2]\n So, See y[1][2]=80\n Take Time And Get It Clearly\n\n So Is the case with 3D Array::::\n As int z[4][3][2] states that, there will be 4 lists, each list containing 3 lists having 2 elements each\n See: int z[4][3][2]=int z[4][3][2]={{{1,2},{3,4},{5,6}},{{7,8},{9,10},{11,12}},{{13,14},{15,16},{17,18}},{{19,20},{21,22},{23,24}}}      \n See the upper list as :\n [{(1,2),(3,4),(5,6)},\n {(7,8),(9,10),(11,12)},\n {(13,14),(15,16),(17,18)},\n {(19,20),(21,22),(23,24)}]\n If you wanna know the position of say 12, then its in the 2nd list, 3rd sublist, and 2nd element\n So its postion will be like z[1][2][1]\n See z[1][2][1]=12"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic6();
else if(input==-1) topic4();
else {cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic5();}    
}
void topic6(){

cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 06\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\n #include<iostream>\n using namespace std;\n\n int main(){\n int x = 10; // we created an integer varible with name x which is equal to 10\n int *p; // we created a pointer with name p \n//Now let\'s give this a value\n// it will take only the address of any integer e.g.\n p = &x; \n cout<<\"pointer p is equal to \"<<p<<endl; //Output is 0x61fe14( it is only pointing to address)\n cout<<\"&x or the address of x is equal to \"<<&x<<endl; //Output is 0x61fe14( it is the actual address )\n// So as you have seen pointer is what points to the address of any variable;\n// putting * with a pointer is the value stored at which address pointer is pointed// that * is called dereference operator\n cout<<\"Dereferenced *p is equal to \"<<*p<<endl; //Output is 10( it is only pointing to the value )\n cout<<\"x or the actual value x contains is equal to \"<<x<<endl<<endl; //Output is 10( it is the actual value )\n cout<<\"Important Point to note is: Changing the *pointer change the actual value of the variable also\"<<endl;\n//Why do we need to study Pointers\n//1. while accessing the elements of arrays, e.g.\n\n int *ptr;\n int arr[5];\n ptr = arr;\n// here::::\n *ptr == arr[0]; //Or you can just write ptr = arr; one and the same thing bacha\n *(ptr + 1) is equivalent to arr[1];\n *(ptr + 2) is equivalent to arr[2];\n *(ptr + 3) is equivalent to arr[3];\n *(ptr + 4) is equivalent to arr[4];\n\n if we have initialized ptr = &arr[2]; then:::\n ptr - 2 is equivalent to &arr[0];\n ptr - 1 is equivalent to &arr[1]; \n ptr + 1 is equivalent to &arr[3];\n ptr + 2 is equivalent to &arr[4]"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic7();
else if(input==-1) topic5();
else {cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic6();}    
}
void topic7(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 07\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared\n as a reference by putting \'&\' in the declaration. "<<endl;
cout<<"See the code below to get how reference is just like the nickname and element itself\n #include<iostream>\n using namespace std;\n \n int main()\n {\n   int x = 10;\n \n   // ref is a reference to x.\n   int& ref = x;\n \n  // Value of x is now changed to 20\n   ref = 20;\n   cout << \"x = \" << x << endl ;\n \n   // Value of x is now changed to 30\n   x = 30;\n   cout << \"ref = \" << ref << endl ;\n \n   return 0;\n }\n\n ::::OUTPUT::::\n  x = 20\n ref = 30"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic8();
else if(input==-1) topic6();
else {cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic7();}    
}
void topic8(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 08\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\nBefore accessing arrays in functions through pointers or reference, Remember:\nParameters which can be passed to the fuctions are \t01. Direct Value\t02. Passing Pointers\t03. Passing Reference"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\tSee: in the below code, we are just passing the value of x and y in above fns, but not sending actual x and y\n\n #include<iostream>\n using namespace std;\n\n void sumWalaFns(int x, int y){\n     x=10;\n     y=10;\n     cout<<\"Upar wala Function ka x is \"<<x<<\" and function wala y is \"<<y<<endl; //Output: Upar wala Function ka x is 10 and function wala y is 10\n }\n\n int main(){\n     int x, y;\n     cin>>x>>y;//Say Input is x = 20 and y =20\n     sumWalaFns(x,y);\n     cout<<\"Main fns wala x is \"<<x<<\" and y is \"<<y<<endl; //Output: Main fns wala x is 20 and y is 20\n     return 0;\n }"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\tNow See: in the below code, we are sending the actual variable indirectly by sending their addresses through pointer.\n\n #include<iostream>\n using namespace std;\n\n void sumWalaFns(int * x, int * y){\n     *x=10;\n     *y=10;\n     cout<<\"Upar wala Function ka x is \"<<*x<<\" and function wala y is \"<<*y<<endl; //Output: Upar wala Function ka x is 10 and function wala y is 10\n }\n\n int main(){\n     int x, y;\n     cin>>x>>y;//Say Input is x = 20 and y =20\n     sumWalaFns(&x,&y);\n     cout<<\"Main fns wala x is \"<<x<<\" and y is \"<<y<<endl; //Output: Main fns wala x is 10 and y is 10\n     return 0;\n }"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\tAnd See: in the below code, we are sending the actual variable through reference(nickname):\n #include<iostream>\n using namespace std;\n\n void sumWalaFns(int &x, int &y){\n     x=10;\n     y=10;\n     cout<<\"Upar wala Function ka x is \"<<x<<\" and function wala y is \"<<y<<endl; //Output: Upar wala Function ka x is 10 and function wala y is 10\n }\n\n int main(){\n     int x, y;\n     cin>>x>>y;//Say Input is x = 20 and y =20\n     sumWalaFns(x,y);\n     cout<<\"Main fns wala x is \"<<x<<\" and y is \"<<y<<endl; //Output: Main fns wala x is 10 and y is 10\n     return 0;\n }"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic9();
else if(input==-1) topic7();
else {cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic8();}    
}
void topic9(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 09\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"\t\tCreation of Structure is like :\nstruct Person\n{\n    char name[50];\n    int age;\n    float salary;\n};"<<endl;
cout<<"//When a structure is created, no memory is allocated. but when it is declared then only it consumes memory.\n//Note: Remember to end the declaration with a semicolon (;)"<<endl;
cout<<"\n\t\tDeclaration of Structure is like :\n 01. after the end curly bracket of structure give names and use comma(,) to create more than one structure\n 02. In main fns use like this: struct structureName = variableName;//you can skip writing struct before the name of the structure also."<<endl;
cout<<"\nSee the code and try to get:\n\n#include<iostream>\n using namespace std;\n struct complex{\n     float real;\n     float img;\n }C1,C2;\n\n float complexSumReal(complex c1, complex c2){\n     float ans;\n     ans= c1.real+c2.real;\n     return ans;\n     }\n\n float complexSumImg(complex c1, complex c2){\n   float sum= c1.img+c2.img;\n     return sum;\n }\n\n\n int main(){\n   \n // complex C1,C2; can also be used for declaration   \n     cout<<\" Enter real and imaginary parts of Complex no. 1 respectively: \"<<endl;\n     cin>>C1.real>>C1.img;\n     cout<<\" Enter real and imaginary parts of Complex no. 2 respectively: \"<<endl;\n     cin>>C2.real>>C2.img;\n     float finalReal = complexSumReal(C1,C2);\n     float finalImg = complexSumImg(C1,C2);\n     char sign;\n     sign = (C1.img+C2.img >0)? \'+\': \' \'; \n (cond1)?true:false;\n     cout<<\"Sum = \"<<finalReal<<sign<<finalImg<<\"i\"<<endl;\n\n     return 0;\n }"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"------------------------------------]]Accessing variables of structure using pointers:[[----------------------"<<endl;
cout<<"Here is how you can create pointer for structures:\n\n #include <iostream>\n using namespace std;\n\n struct temp {\n     int i;\n     float f;\n };\n\n int main() {\n     temp *ptr;\n     return 0;\n }"<<endl;
cout<<"This is how you access variables of structure through pointers also:\n\n #include <iostream>\n using namespace std;\n\n struct Distance {\n     int feet;\n     float inch;\n };\n\n int main() {\n     Distance *ptr, d;\n\n     ptr = &d;\n    \n     cout << \"Enter feet: \";\n     cin >> (*ptr).feet; \n//you can write ptr->feet; also\n     cout << \"Enter inch: \";\n     cin >> ptr->inch;\n//you can write(*ptr).inch also\n \n     cout << \"Displaying information.\" << endl;\n     cout << \"Distance = \" << ptr->feet << \" feet \" << (*ptr).inch << \" inches\";\n\n     \n//ptr->feet is same as (*ptr).feet\n     \n//ptr->inch is same as (*ptr).inch    \n\n     return 0;\n }"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>[\tANALYSIS\t]<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
cout<<"01. struct ko main fns ke bahr banana taki saare functions uske variables ko access kar sken.\n02. struct ek statement hai so curly braces ke baad semicolon(;) mat bhulna plz.\n03. struct ko curly braces and semicolon ke bich me jitne marzi no. of varibles declare kar skte hain, ya fir main fns me bhi\n strucureName variableName; aese kar k declare kar skte hain.\n04. structure ke variables ko dot lagake access kar skte hain.\n05. agar humne pointer ko structure pe point kara hai toh pointer ke dereference karke dot((*pointerName).variableName=...) lagane se\n acha hai (pointerName->variableName=...) use krskte hain."<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

cout<<"Enter the command[0 for main menu, 1 for next topic, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==1) topic10();
else if(input==-1) topic8();
else {cout<<"Yeh kya daba di ho yrr, -1, 0 or 1 mese koi ek dabana tha..."<<endl; topic9();}    
}
void topic10(){
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 10\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Basically Structure and Class me kaafi similarities hoti hai... \n\t\tlike see the structure code down there:"<<endl;
cout<<"\n #include<iostream>\n using namespace std;\n struct Rectangle{\n    int length;\n    int breadth;\n}R1;\n\nvoid initializationFns(){\n    R1.length=R1.breadth=1;\n}\n\nvoid setValue(int l, int b){\n    R1.length = l;\n    R1.breadth = b;\n}\n\nint perimeter(){\n    return 2*(R1.length+R1.breadth);\n}\n\nint area(){\n    return R1.length*R1.breadth;\n}\n\nint getLength(){\n    return R1.length;\n}\n\nint getBreadth(){\n    return R1.breadth;\n}\n\nint setLength(){\n    return R1.breadth;\n}\n\nvoid setLength(int l){\n    R1.length=l;\n}\n\nvoid setBreadth(int b){\n    R1.breadth=b;\n}\n\n\nint main(){\n    initializationFns();\n    cout<<\"Initial Length: \"<<getLength()<<endl;\n    cout<<\"Initial Breadth: \"<<getBreadth()<<endl;\n    cout<<\"Initial Perimeter: \"<<perimeter()<<endl;\n    cout<<\"Initial Area: \"<<area()<<endl;\n    \n    setValue(10,20);\n    cout<<\"After Setting Length: \"<<getLength()<<endl;\n    cout<<\"After Setting Breadth: \"<<getBreadth()<<endl;\n    cout<<\"After Perimeter: \"<<perimeter()<<endl;\n    cout<<\"After Area: \"<<area()<<endl;\n\n    return 0;\n\n}"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"\t\tNow See the class code down there:"<<endl;
cout<<"\n #include<iostream>\n using namespace std;\n class Rectangle{\n private:\n     int length;\n     int breadth;\n public:\n\n     Rectangle(){\n         length = breadth= 1;\n     }\n\n     Rectangle(int l, int b){\n         length = l;\n         breadth = b;\n     }\n\n     int area();\n     int perimeter();\n\n     int getLength(){\n         return length;\n     }\n     int getBreadth(){\n         return breadth;\n     }\n     void setLength(int l){\n         length = l;\n     }\n     void setBreadth(int b){\n         breadth = b;\n     }\n };\n    \n     int Rectangle::area(){\n         return length*breadth;\n     }\n     int Rectangle::perimeter(){\n         return 2*(length+breadth);\n     }\n\n\n\n int main(){\n     Rectangle R1;\n     cout<<R1.getLength()<<endl;\n     cout<<R1.getBreadth()<<endl;\n     cout<<R1.area()<<endl;\n     cout<<R1.perimeter()<<endl;\n     R1.setLength(10); R1.setBreadth(20);\n     cout<<R1.getLength()<<endl;\n     cout<<R1.getBreadth()<<endl;\n     cout<<R1.area()<<endl;\n     cout<<R1.perimeter()<<endl;\n     Rectangle R2(50,100);\n     cout<<R2.getLength()<<endl;\n     cout<<R2.getBreadth()<<endl;    \n     cout<<R2.area()<<endl;\n     cout<<R2.perimeter()<<endl;\n     return 0;\n }"<<endl;
cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>[\tANALYSIS\t]<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;
cout<<"\n1. Dekho sabse pehle toh struct ki jagah class likhenge hi."<<endl;
cout<<"\n2. struct ke saare variables fns ke through humlog(dot lagake) access kar lenge so usko access karna public hua,\n but class me >>>BY DEFAULT SAB KUCH PRIVATE HOTA HAI<<< so usme public(access modifier) define krna padega! "<<endl;
cout<<"\n3. struct ka variable pehle hi define hogaya hai, toh usko functions ke through access karlenge, but agar saare \nfunctions agar struct ke liye hi hain to saare functions ko curly braces me hi daal do, and structure ke elements\n ko direct access karo, but kyunki ye error dedega, isiliye class hai, class me humlog saare functions andar hi\n banalenge curly braces ke andar and mast apna variable access karenge..."<<endl;
cout<<"\n4. toh class me humne saare fns andar bana liye, variable direct access krne ke liye public krdiya hai, now listen,\n class actually me ek blueprint hota hai, usko jinda krne k liye object banana padega, so humlog main fns me object\n banayenge and classes ke public variable and fns direct access karenge(dot lagake), and private wale fns ke through\n karenge, sabkuch object pe dot lagake...\n"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"Enter the command[0 for main menu, -1 for prev topic]: "<<endl;
int input;
cin>>input;
if(input==0) main();
else if(input==-1) topic9();
else {cout<<"Yeh kya daba di ho yrr, -1 or 0 mese koi ek dabana tha..."<<endl; topic10();}    
}
// cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
// cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!![\tTOPIC 10\t]!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
// cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;

// cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>[\tANALYSIS\t]<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl;

// cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;
// cout<<"---------------------------------------------------------------------------------------------------------------"<<endl;