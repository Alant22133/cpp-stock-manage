# Stock Management Program (C++)

This project is a C++ program that models a simple Stock object and demonstrates principles of object-oriented programming (OOP) and memory management.  

## Features
- Custom `Stock` class with:
  - Constructors (default, parameterized, and copy constructor)  
  - Destructor for cleanup of dynamically allocated memory  
  - Getter and setter methods for encapsulation  
- Demonstrates deep copy for safe pointer handling  
- Reads stock data from an input file (`stocks.txt`)  

## Skills Demonstrated
- Object-Oriented Programming (OOP)  
- Constructors, Destructors, Copy Constructors  
- Dynamic Memory Allocation (`new` / `delete`)  
- File I/O in C++  
- Encapsulation and Class Design  

## How to Compile and Run
```bash
g++ main.cpp stock.cpp -o stockProgram
./stockProgram
