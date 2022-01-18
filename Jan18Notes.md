Lecture Quiz week 2

- 2.1 The Parts of a C++ Program 

//sample c++ program <-- comment 
#include <iostream>  <-- preprocessor directive
using namespace std; <-- which namespace to use
int main() 			 <-- beginning of function named main
{ 					 <-- beginning of block main
	cout << "Hello, there!"; <-- output statement
	return 0; 		 <-- sends 0 to the operating system
} 					 <-- end of block for main

cout = c output


Special Characters

characters		name 		Meaning
	//			Double slash
	#			Pound sign
   < >
    ()			open/close parenthasis
	{}
	""
	;


2.2 

The cout object
- displays output on the computer screen
- you use the stream insertion operator << to send output to cout

cout<< "programming is fun";

- can be used to send more than one item to cout:
cout << "Hello" << "there!";
OR
cout << "Hello" ;
cout << "there!" ;
both of the above examples are printed on one line 

The endl manipulator 
- you can use the endl manipulator to start a new line of output. This produces two lines of output


The \n Escape Sequence
- you can also use the \n 

cout << "Programming is\n";
cout<< "fun";

2.3 
The #include Directive
- inserts the contents of another file into the program
- this is a preprocessor directive, not part of C++ language
- #include lines not seen by compiler
- do not place a semicolon 


2.4 
Variables and literals 
- variables : a storage location in memory 
	- has a name and type of data it can hold 
	- must be defined before it can be used:
		- int number; 


Literal: a value that is written into a program's code
	-  "hello there (String literal)
	- 20 (an integer literal)

2.5 Identifiers? 
an identifier is a programmer - defined name for some part of a program: variables, functions, ect. 

C++ Key Words - off limits for naming variables 

Variable Names 
- a variable name should represent the purpose of the variable. For example: iteamsOrdered
- the purpose of this variable is to hold the number of items ordered

Identifier zrules 
- the first character of an identifier must be an alphabetical character or an underscore 
- after the first character you may use alphabetic characters, numbers, or underscore characters
- upper- and lowercase characteers are distinct


2.6 Integer Data Types
- integer variables can hold whole numbers such as 12, 7, and -99 


Defining Variables 
- variables of the same type can be defined 
	- on seperate lines 
	int height;
	int weith;
	unsigned age;
	- on the esame line 
	int height, weight;
	unsigned age;
- variables 

INTEGER LITERALS
- an integer literal is an integer value that is typed into a programs code. ex. itemsOrdered = 15;
- integer literals are stored in memory as ints by default
- to store an inteeger constant in a long memory location put 'L' at the end of the number: 123L
- to store an inteeger constant in a long long memory location put 'LL' at the end of the number: 123LL
- constants that begin with '0' zero are base 8: 010
- constants that begin with '0x' zero are base 16: 0x10

2.7 The char Data type 
- used to hold characters or very small integer values 
- usually 1 byte of memory 

character literals 
- must be enclosed in single quote marks ex: 'a'

character Strings
- a series of characters in consecutive memory locations: "Hello"
- stored with the null terminator, \0, at the end:
- compromised of the characters between the " " |H|e|l|l|o|\0|

2.8 the C++ string Class
- special data type ssupports working with strings
	#include <string>
- can define string variables in programs:
	string firstNAme, lastName;
- can receive valuess with assignment operator
	firstName = 
	lastName = 

2.9 Floating point data types 

- the floating point data types are: flaot, double and long double 
- they can hold real numbers such as: 12.45, -3.8
- stored in a
































