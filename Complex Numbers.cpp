// This program is demonstrates about the class of complex which 
// we have declare two data members and the following functions 
// are involved.
// 1 - Constructors (3).
// 2 - Setters (2).
// 3 - Getters (2).
// 4 - Input / Output (2).
// 5 - Operators Overloading (By using)
// 	       => ++ (prefix, postfix)
//         => -- (Prefix, postfix)
// also -, +, *, /, >>, <<, =, ==, <=, >=.
// And call them in main function these all functions by using objects.
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

class Complex
{
	private:
		int real;
		float imaginary;
		
	public:
		Complex()        // Default Constructor.
		{
			real = 0;
			imaginary = 0.0;
		}
		
		Complex(int r, float i)    // Parametrized Constructors.
		{
			real = r;
			imaginary = i;
		}
		
		Complex (const Complex &p) // Copy Constructors.
		{
			real = p.real;
			imaginary = p.imaginary;
		}
		
		void setReal(int a)        // Setter of real part.
		{
			real = a;
		}
		
		void setImaginary(float b) // Setter of imaginary part.
		{
			imaginary = b;
		}
		
		int getReal()              // Getter of real part.
		{
			return real;
		}
		
		float getImaginary()         // Getter of imaginary part.
		{
			return imaginary;
		}
		
		void input()               // Function of Input.
		{
			cout << "Enter Real Number : ";
			cin >> real;
			
			cout << "Enter Imaginary Number : ";
			cin >> imaginary;
		}
		
		void output()              // Function of output.
		{
			cout << "Real Number = " << real << endl;
			cout << "Imaginary Number = " << imaginary << endl;
		}
		
		void operator ++ ()        // Prefix increment.
		{
			++real;
			++imaginary;
		}
		
		void operator ++ (int)     // Postfix increment.
		{
			real++;
			imaginary++;
		}
		
		void operator -- ()        // Prefix decrement.
		{
			--real;
			--imaginary;
		}
		
		void operator -- (int)     // Postfix decrement.
		{
			real--;
			imaginary--;
		}
		
		// By using (-) Operator Overload.
		Complex operator - (Complex C)
		{
			Complex obj;
			
			obj.real = real - C.real;
			obj.imaginary = imaginary - C.imaginary;
			
			return obj;
		}
		
		// By using (+) Operator Overload.
		Complex operator + (Complex C)
		{
			Complex obj;
			
			obj.real = real + C.real;
			obj.imaginary = imaginary + C.imaginary;
			
			return obj;
		}
		
		// By using (*) Operator Overload.
		Complex operator * (Complex C)
		{
			Complex obj;
			
			obj.real = real * C.real;
			obj.imaginary = imaginary * C.imaginary;
			
			return obj;
		}
		
		// By using (/) Operator Overload.
		Complex operator / (Complex C)
		{
			Complex obj;
			
			obj.real = real / C.real;
			obj.imaginary = imaginary / C.imaginary;
			
			return obj;
		}
		
		// By using (difference) Operator Overload.
		void operator - ()
		{
			real -= real;
			imaginary -= imaginary;
		}
		
		// By using (=) Operator Overload.
		void operator = (Complex C)
		{
			real = C.real;
			imaginary = C.imaginary;
		}
		
		// By using (==) Operator Overload.
		bool operator == (Complex &C)
		{
			if (real == C.real)
			{
				if(imaginary == C.imaginary)
				{
					return true;
				}
				
				else
				{
					return false;
				}
			}
			
			else
			{
				return false;
			}
		}
		
		// By using (<=) Operator Overload.
		bool operator <= (Complex &C)
		{
			if(real <= C.real && imaginary <= C.imaginary)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		// By using (>=) Operator Overload.
		bool operator >= (Complex &C)
		{
			if(real >= C.real && imaginary >= C.imaginary)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		// Friend Function of the class, (<<) operator.
		friend ostream& operator << (ostream& o, Complex &C);
		
		// Friend Function of the class, (>>) operator.
		friend istream& operator >> (istream& i, Complex &C);
	
};

// By using (<<) Operator Overload.
ostream& operator << (ostream& o, Complex &C)
{
	o << C.real << endl;
	o << C.imaginary << endl;
	
	return o;
}

// By using (>>) Operator Overload.
istream& operator >> (istream& i, Complex &C)
{
	i >> C.real;
	i >> C.imaginary;
	
	return i;
}

//********************************
// Main of the program (.cpp).   *
//********************************

int main()
{
	Complex first, second, third;
	int x;
	float y;
	
	cout << "\a\n****************_Complex_****************\n";

	// call setter of object no.1
	first.setReal(x);
	first.setImaginary(y);
	
	// Call setter of object no.2
	second.setReal(x);
	second.setImaginary(y);
	
	// Call setter of object no.3
	third.setReal(x);
	third.setImaginary(y);
	
	// Call getter of object no.1
	first.getReal();
	first.getImaginary();
	
	// Call getter of object no.2
	second.getReal();
	second.getImaginary();	
	
	// Cell getter of Object no.3
	third.getReal();
	third.getImaginary();
	
	cout << "\n---> For 1st Object : \n";
	first.input();    // Input function call for onject 1.
	cout << "\n---> For 2nd Object : \n";
	second.input();   // input function call for object 2.
	
	cout << "\a\n\t=> Before Operator Overloading.\n";
	first.output();	
	second.output();
	
	cout << "\n => First Object (Decrement).\n";
	cout << "\n----> After Operator Overloading (Postfix decrement).\n";
	first--;
	first.output();
		
	cout << "\n----> After Operator Overloading (Prefix decrement).\n";
	--first;
	first.output();
	
	cout << "\n => Second Object (Increment).\n";
	cout << "\n----> After Operator Overloading (Postfix increment).\n";
	second++;
	second.output();
	
	cout << "\n----> After Operator Overloading (Prefix increment).\n";
	++second;
	second.output();
	
	cout << "\n\t   => Subtraction <=\n";
	third = first - second;
	
	cout << "first - second = ";
	cout << third.getReal() << " real, ";
	cout << third.getImaginary() << " imaginary.\n";
	
	cout << "\n\t   => Addition <=\n";
	third = first + second;
	
	cout << "first + second = ";
	cout << third.getReal() << " real, ";
	cout << third.getImaginary() << " imaginary.\n";
	
	cout << "\n\t   => Multiplication <=\n";
	third = first * second;
	
	cout << "first * second = ";
	cout << third.getReal() << " real, ";
	cout << third.getImaginary() << " imaginary.\n";
	
	cout << "\n\t   => Division <=\n";
	third = first / second;
	
	cout << "first / second = ";
	cout << third.getReal() << " real, ";
	cout << third.getImaginary() << " imaginary.\n";
	
	cout << "\n\t   => Difference <=\n";
	third = second - first;
	
	cout << "second - first = ";
	cout << third.getReal() << " real, ";
	cout << third.getImaginary() << " imaginary.\n";
	
	first = second;     // Equal Objects which contains same values of 
						// different Objects.
	
	cout << "\n => Condition Satisfy ? " << endl;
	if (first == second)
	{ 
		cout << "First is equal to Second.\n";
	}
	
	if (first >= second)
	{
		cout << "First is greater than Second.\n";
	}
	
	if (first <= second)
	{
		cout << "First is less than Second.\n";
	}
	
	cout << endl;
	
	cout << "Input Comlex no. for first object : \n";
	cin >> first;
	cout << "Output : \n";
	cout << first << endl;

	cout << "Input Comlex no. for second object : \n";
	cin >> second;
	cout << "Output : \n";
	cout << second << endl;
	
	cout << "\t     *-------------------*\n";
	
	return 0;
	
}
