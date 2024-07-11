/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <climits>				// library to see the max and min of all data types
#include <iomanip>				// setprecision(int n)
#include <cmath>

using namespace std;

#define MATH_PI 3.14159
#define maxint INT_MAX
#define minint INT_MIN

int
main ()
{
  /*
     // problem 3
     cout << "PROBLEM 3" << endl;
     cout << "The sizeof(char) is     : " << sizeof(char)<< " bytes" << endl;
     cout << "The sizeof(float) is    : " << sizeof(float)<< " bytes" << endl;
     cout << "The sizeof(double) is   : " << sizeof(double)<< " bytes" << endl;
     cout << "________________________________________________________" << endl;

     // problem 4 : Write a program in C++ to print the sum of two numbers using variables.
     cout << "PROBLEM 4" << endl;
     int a = 29, b = 30;
     int sum = a+b ;
     cout << "The sum of 29 and 30 is : " << sum << endl;
     cout << "________________________________________________________" << endl;

     // problem 5 : To check the upper and lower limits of integers.
     cout << "PROBLEM 5 " << endl ; 
     cout << "The maximum limit of int data type : " << maxint << endl; 
     cout << "The minimum limit of int data type : " << minint << endl; 
     cout << "Bits contain in char data type     : " << CHAR_BIT << endl;
     cout << "The minimum limit of short data type : " <<  SHRT_MIN<< endl; 
     cout << "________________________________________________________" << endl;

     // problem 6 : check whether primitive value cross the limit
     char gender = 'F'; 
     bool married = true; 
     unsigned int num_sons = 2;  // Since it cannot be negative 
     short year = 2009; 
     unsigned int salary = 1500000; 
     double height = 79.48; 
     float gpa = 4.69f;
     long salary_drawn = 12047235;
     long long balance = 995324987;

     cout << gender << endl;
     cout << married << endl;
     cout << num_sons << endl;
     cout << year << endl;
     cout << salary << endl;
     cout << height << endl;
     cout << gpa << endl;
     cout << salary_drawn << endl;
     cout << balance << endl;
     cout << "________________________________________________________" << endl;

     // problem 7 : displays mixed data types and arithmetic operations.
     int w = 5, x = 7;
     double y = 3.7 , z = 8.0; 
     double num = 3.1455; 

     cout << fixed ; 
     cout << num << endl;

     cout << setprecision(1) << endl;
     cout << "5 + 8.0 = " << w + z << "\n"
     << "3.7 / 8.0 = " << y / z << "\n"
     << "3.7 * 8.0 = " << y *z << "\n" ; 
     cout << "5 / 8.0 = " << setprecision(6) << w / z << "\n" ;
     cout << "________________________________________________________" << endl;


     // problem 8 : program to check overflow/underflow during various arithmetic operations
     int n1, n2; 

     n1 = 2147483647; 
     n2 = -2147483648; 

     cout << "Overflow the integer range and set in minimum range : " << n1 + 1 << endl; 
     cout << "Increasing from its minimum range : "<< n1 + 2 << endl; 
     cout << "Product is : " << n1 * n1 << endl; 

     cout << "Underflow the range and set in maximum range : "<< n2 - 1 << endl; 
     cout << "Decreasing from its maximum range : " << n2 - 2 << endl; 
     cout << "Product is : " << n2*n2 << endl;
     cout << "________________________________________________________" << endl;

     // problem 9 : program to display the operation of pre and post increment and decrement.
     int n3 = 57; 
     n3++;
     cout << "After post increment by 1 the number is : " << n3 << endl; 
     n3++; 
     cout << "After pre increment by 1 the number is  : " << n3 << endl;
     n3 = n3 +1 ; 
     cout << "After increasing by 1 the number is     : " << n3 << endl;
     n3--;
     cout << "After post decrement by 1 the number is : " << n3 << endl;
     n3 = n3 - 1; 
     cout << "After decreasing by 1 the number is     : " << n3 << endl;

     // problem 10 : program to format the output.

     // problem 11 : program to print the results of the specified operations.

     // problem 12 : program to add two numbers and accept them from the keyboard.

     int num1, num2; 

     cout << "Input 1st number : " ; 
     cin >> num1; 
     cout << "Input 2nd number : " ; 
     cin >> num2; 
     sum = num1 + num2 ; 
     cout << "The sum of the numbers is : " << sum << endl; 
     cout << "________________________________________________________" << endl;


     // problem 13 : program that swaps two numbers.

     int k, j; 
     int temp = 0; 
     cout << "Input 1st number : " ; 
     cin >> k;
     cout << "Input 2nd number : " ; 
     cin >> j; 
     temp = j; 
     j = k;  
     k = temp; 

     cout << "After swapping the 1st number is : " << k << endl;
     cout << "After swapping the 2nd number is : " << j << endl; 
     cout << "________________________________________________________" << endl;

     // problem 14 : program that calculates the volume of a sphere.
     // volume = (4/3)pi * r^3 

     int rad; 
     double  vol;
     cout << "Input the radius of a sphere : " ; 
     cin >> rad; 
     vol = ((pow(rad, 3)) * MATH_PI * 4) / 3 ; 
     cout << "The volume of a sphere is : " << vol << endl; 
     cout << "________________________________________________________" << endl;

     // problem 15 : program that calculates the volume of a cube.
     int cube; 
     int vol_cube; 
     cout << "Input the side of a cube: " ; 
     cin >> cube; 
     vol_cube = pow(cube, 3);
     cout << "The volume of a cube is : " << vol_cube << endl;
     cout << "________________________________________________________" << endl;

     // problem 16 : program that calculates the volume of a cylinder.
     double vol_cylinder;

     cout << "Input the radius of the cylinder : " ; 
     cin >> rad ;
     cout << "Input the height of the cylinder : " ; 
     cin >> height ; 

     vol_cylinder = MATH_PI * (pow(rad, 2)) * height ; 
     cout << "The volume of a cylinder is      : " << vol_cylinder << endl; 
     cout << "________________________________________________________" << endl;

     // problem 17 : program to find the Area and Perimeter of a Rectangle.
     int length, width, area_rec, perimeter_rec; 

     cout << "Input the length of the rectangle : " ; 
     cin >> length; 
     cout << "Input the width of the rectangle  : " ; 
     cin >> width ; 

     area_rec = length * width;
     perimeter_rec = 2 * (width + length);

     cout << "The area of the rectangle is      : " << area_rec <<endl;
     cout << "The perimeter of the rectangle is : " << perimeter_rec << endl;
     cout << "________________________________________________________" << endl;


     // problem 18 : program to find the area of any triangle using Heron's formula.
     float s1, s2, s3, s, area_triangle; 
     cout << fixed << setprecision(4); 
     cout << "Input the length of 1st side of the triangle : " ;
     cin >> s1;
     cout << "Input the length of 2nd side of the triangle : " ;
     cin >> s2;
     cout << "Input the length of 3rd side of the triangle : " ;
     cin >> s3;

     s = (s1+s2+s3)/2;
     area_triangle = sqrt(s*(s-s1)*(s-s2)*(s-s3));

     cout << "The area of the triangle is : " << area_triangle << endl;
     cout << "________________________________________________________" << endl;

     // problem 19 : program to find the area and circumference of a circle.
     double r, area_cir, circumference;

     cout << "Input the radius(1/2 of diameter) of a circle : ";
     cin >> r;

     area_cir = MATH_PI * pow(r, 2); 
     circumference = 2 * MATH_PI * r;
     //cout << fixed << setprecision(6);
     cout << "The area of the circle is           : " << area_cir << endl;
     cout << "The circumference of the circle is  : " << circumference << endl;

   */

  // problem 20 : program to convert temperature in Celsius to Fahrenheit.
  double celsius, faren;

  cout << "Input the temperature in Celsius : ";
  cin >> celsius;

  cout << "The temperature in Celsius    : " << celsius << endl;

  faren = (celsius * 1.8) + 32;

  cout << "The temperature in Fahrenheit : " << faren << endl;


  return 0;
}
