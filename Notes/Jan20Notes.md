2.9 Flaoting - Point Data Types
	- the floating point data types are 
		flaot (single presision), double (double precision), and long double (long double precision)
	- they can hold real numbers such as 12.45 and -3.8
	- stored in a form similar to scientific notaion 
		- 1.2E6 = 1.2 * 10^6 = 1,200,000.00
	- all floating point numbers are signed 

FLoating point literal 
- can be represented in 
	- fixed point (decimal) notatioon: 31.4159 : 0.0000625
	- Scientific notation: 3.14159E1 : 6.25E-5
- are double by default
- can be forces to be a float(3.14159f) or long double (0.0000625L)

**Program**

The bool data type
- represents values that are true or false
- bool variables are stored as small integers 
- false is represented as 0, true by 1
- LOSTTTTTTTT

**Program**

2.11 Determining the size of a data type
- the sizeof operator gives the size of any data type or variable 

	double amount;

	cout << "a double is stored in " << sizeof(double) << "bytes\n.";

2.12 Variable assignments and initialization 
- an assignment uses the = operato to store a value in a variable 
item = 12; 
- this statement assigns 12 to the item value

Assignment
- The variable receiving the value must appear on the left side of the = operator 
- this will NOT work 12 = item 

Variable Initialization
- to initiate a variable means to assign it a value when it is defined 
	int length  = 12 

- can initialize some or all variables 
	int length 12 LOST



**PROGRAM**


Declaring variables with the auto key word
- C++ 11 introduces an alternative way to define variables, using the auto keyword and an initialization value. 
ex.  auto amount = 100; <-- int

- the auto key word tells the compiler to determine the variables data type from LOST

2.13 Scope 
- the scope of the variable : the part of the program in which the varibale can be accessed 
- a variable cannot be used before it is defined 


2.14 Arithmetic Operators
- used for performing numeric calculations 
- C++ has unary, binary, and ternary operators
	- (-5)
	- (13-15)
	- ternary (3 operands) words ? wword : word

**Program**

2.15 Comments

2.16 Names constants 
- named constant (constant variable): variable whole content cannot be changed durring program execution
- used for representing constant values ith descriptive names 
const int NUMBER_OF_DOGS = 13;
- often named in all upercase letters

Programming Style
- The visual organization of the source code 
- includes the use of spaces, tabs, and blank lines 
- LOST 






Modified source code -->
Compiler -->
objecct code -->
linker --> makes an executable file 
executable --> personalized to your computer 
































