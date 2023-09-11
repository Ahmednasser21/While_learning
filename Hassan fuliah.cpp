#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <functional>
#include <algorithm>
#include <fstream>
#include <list>
#include <iterator>
#include <deque>
#include <set>
#include <forward_list>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <limits>
//const double pi = 3.14;
using namespace std;
//=========exception propagator it is compiled into the main function (try , catch , throw)========
// ========== and it is named exception catcher if it is compiled inside the function=======
/*
void info()
{
	int num;
	cout << "Enter a positive number " << endl;
	cin >> num;
	if (num <= 0) throw("Erorr");
	cout << "Number = " << num << endl;
}
int zaid = 9; // global variable
void ADD (int &x , int &y) // not usfule function without & because without it we are dealing with 
					//variables as a value but when we add & we are refering to it`s memory adress.
void ADD(int* p)
{	
	*p=*p+1; //p++ dosen`t work with pointers
}
int sum(int x, int y=0)//defalut argument (should be for the last parameters)
{
	return x + y;
}

inline void print()//in case of this function content was not larg and i`m using it alot i can use inlie function
			// it is making a copy like inside the main function.
{
	cout << "Hellow" << endl;
}
*/
// ========Heigher order function ========
// ====== frist example two ordinary functions ========
/*
* i can use the ordinary function either with another ordinary function or with lambda function.
int sum(int x, int z,function<int (int, int)> y)
{
	return y (x ,z);
}
int add(int e, int r) { return ((e+r) * 2) / r; }
 // ===== oop ======= class ========
class Human
{public:
	
	void get_values(string name_, int age_)
	{
		this -> name = name_;
		this -> age = age_;
	}
	void print_values() 
	{
		this->age = this->age + 1;
		cout << this->name << endl;
		cout << this->age << endl;
	}
private:

	string name;
	int age;

};

 //===== constructors =====
class a
{
public:
	a()
	{
		age = 20;

	}
	a(int age_)
	{
		age = age_;
	}
	void print_age()
	{
		cout << age << endl;
	}

private:
	int age;
};

// ======= inheritance =====

class A 
{
public:
	void print_age()
	{
		age = 20;
		cout << age << endl;
	}

private:
	int age;
};
class B 
{
public:
	void get_name()
	{
		name = "Ahmed";
		cout << name << endl;
	}
private:
	string name;
};
class C : public B ,public A
{};

// ======= super constructor =========
class A 
{
public:
	A(int n)
	{
		cout << "number is "  << n << endl;
	}
};
class B :public A
{
	public:
	B(int z) : A(z)
	{
		cout << "coming from B" << endl;
	}
};
class C : public B
{
public:
	C(int g) : B(g)
	{
		cout << "Coming from c " << endl;
	}
};

 // ========== class override =========
class Sum 
{
public:
	virtual void sum(int x, int z) = 0; // >> virtual function in  virtual class
	//{
		//cout << "from Sum " << x + z << endl;
	//}
};
 class operation : public Sum
 {
 public:
	 void sum(int x, int z) override
	 {
		 cout << "coming  from Operation " << x + z << endl;
	 }
 };
 // =========== polymorphism ==========

 class shape // if it is abstract class the only use of it is like a referance of several class.
 {
 public:
	virtual void info()
	 {
		 cout << "Shape" << endl;

	 }
 };
 class Circle : public shape
 {
 public:
	 void info() override
	 {
		 cout << "Circle" << endl;
	 }
 };
 class Rectangle : public shape
 {
 public:
	 void info() override
	 {
		 cout << "Rectangle" << endl;
	 }
 };
 class A
 {
 public:
	 void draw(shape *q)
	 {
		 q->info();
	 }
 };

 // ===== struct ===== 
// struct equals class but the diffirance is in default aaccess modifier private in class and public in struct. 
class object
{
public:
	string name;
	int x;
}obj;
 
//====== naested class =========
class A
{
private:

	class B
	{
	public:
		void infooo()
		{
			cout << "B" << endl;
		}
	}b;

public:

	void info()
	{
		cout << "A" << endl;
		b.infooo();
	}
} a;

//======= destructors===========
class R
{
	int *z = new int;
public:
	R(int f)
	{
		*z = f;
		cout << "constructor" << *z << endl;
	}
	~R()
	{
		cout << "Destructor" << *z << endl;
		delete z;
	}
};

// ======== operator overloading ===========
class newclass
{
private:
	int n;
public:
	newclass(int m)
	{
		n = m;
	}
	void print()
	{
		cout << "number is " << n << endl;
	}
	newclass operator + (newclass s)     // newclass add (newclass s) {return (n+s.n);} newclass m3 (m1.add(m2))
	{
		return (n + s.n);
	}
};


//=== continue operator overloading === friend function ===
class newclass
{
private:
	int n;
public:
	newclass(int m)
	{
		n = m;
	}
	void print()
	{
		cout << "number is " << n << endl;
	}
	friend newclass operator + (int x, newclass s);
};

newclass operator + (int x , newclass s)
{
	return (x + s.n);
}

// ==== template or generic function====
class sum
{
public:
	T x;
	Q y;
	T Sum()
	{
		return x + y;
	}
};


template <class T , class Q>


T addd (T x, Q y)
{
	return x + y;
}

// ==== random =====
class A
{
private :
	int s;
public :
	int x;
	A(int f);
	void print();

};
class B
{
public:
	int a;
	A casting()
	{
		return (a);
	};

};
A::A(int f) : s(f) { cout << s << endl; }
void A::print()
{
	cout << s + 10 << endl;
}


// print the output into separate txt file
void car_output_details(ostream& out)
{
	out << "car details" << endl;
	out << "car weight is 1000" << endl;
	out << "car milages are 750" << endl;
}

 // ======= operator overloading + inheritance + function override+ polymorphism =========
class myclass
{
private:
	int n;
public:
	 myclass(int p)
	{
		n = p;
	}
	myclass operator + (myclass m1)
	{
		return { n + m1.n };
	}
	myclass operator * (myclass m1)
	{
		return { n * m1.n };
	}
	myclass operator - (myclass m1)
	{
		return { n - m1.n };
	}
	myclass operator / (myclass m1)
	{
		return { n / m1.n };
	}
	myclass operator % (myclass m1)
	{
		return { n % m1.n };
	}
	myclass operator = (myclass m1)
	{
		return { n };
	}
	virtual void print()
	{
		cout << "class number = " << n << endl;
	}
};
// =========inheritance + function override =========
class mrx : public myclass
{
private:
	int x;
public:
	mrx(int z) : myclass(z)
	{
		x = z;
	}
	void print() override
	{
		cout << "classsy number = " << x << endl;
	}

};
*/
class x
{
private:
	int a;
public:
	int set_a(int z);
	friend void print(x s);
};

int x::set_a(int z)
{
		a = z;
		return a;
}

void print(x w)
{
	cout << "number is : " << w.a << endl;
}


int main()
{
	// ranged loop for tow dimention arraies
	/*int x[2][3] = {{1,2,3},{4,5,6}};
	for (auto& i : x)
	{
		for (int z : i)
		{
			cout << z << endl;
		}
	}
	//vector<vector<int>>x;// tow dimention vector

	// comparing between global variable and local variable with scop ({})
	{
		int zaid = 4;
		cout << zaid << endl; // 4 local variable
		cout << ::zaid << endl;// 9 global variable
	}
	// Alias
	int x = 4;
	const int& y = x;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	//y = 5; >>> erorr constant value refering to a specific memory adress
	x = 5; // acceptable because y is refering to x memory adress
	cout << "new x = " << x << endl;
	cout << "new y = " << y << endl;

	//referances and pointers as parametrs.
	int f = 4, g = 5;
	 ADD(&f);
	 ADD(&g);
	 cout << f << endl;
	 cout << g << endl;
	cout << sum(5, 4) << endl;
	print();
	string name;
	//cin >> name; // this way if i write ahmed nasser it will print just ahmed
	getline(cin, name);
	cout << name << endl;
	//=====================
	string y = { "ahmeda" };
	string x = { "nasser" };
	y.append(x); //>>>>  means y+=x
	y.swap(x); //>>>>>> replacing x value by y and y value by x>> it should be variable of type string
	y.erase(1, 3); // erase y from idex 1 3 indexs including 1 == "ad"
	y.replace(0, 5, "ali"); //replacing y from 0 to 5 with "ali" note 5 is not replacing
	y.replace(y.find('h'), y.find('d'), "zzz"); // replace from what i as;ed to find till the complet end.
	y.insert(5, x); // adding x in position 5.
	y.insert(5, "nasser");//addin nasser in position 5.
	y.append(" Ali");  "equal to"  y.insert(5, " Ali");
	y.erase(y.find('a'),y.find ('m'));

	cout << y.substr(0,2) << endl;//ah
	cout << x.substr(3) << endl;//ser
	cout << y.find('a') << endl; // 0 position of frist a character.
	cout << y.rfind('a') << endl; // 5 position of frist a character from right to left.
	cout << y.find("hm") << endl; //1 possition of 'h' litter in  the string.


	cout << sqrt(9) << endl;
	cout << abs(-9) << endl;
	cout << exp2(3) << endl;
	cout << exp(1) << endl;
	cout << log(10) << endl;
	cout << copysign(3 ,-100) << endl;
	cout << sin(90 *pi/180) << endl;
	cout << rint(6.5) << endl;
	cout << nearbyint(6.5) << endl;
	cout << round(6.5) << endl;
	cout << rand() << endl;
	cout << rand()%40 << endl;
	while (true){
	try
	{
		info();
		break;
	}

	catch (const char* s)
	{
		cout << s << endl;
	}
	}
	*/

	/*lambda Expression ======== inline function into main function
	 syntax ===========
	 auto n = [predefined parameters](parameters){function body};
	 function <retern data type(parametrs data type)> function name =[](){};

	int z = 5, w = 9;
	auto m = [](int x, int y) {cout << x + y << endl;};
	auto f = [z, w] {return z + w;};
	function <int(int) > o = [](int x) {return x * 5;};
	function <void(void)>a = [] {cout << "void function" << endl;};
	m(5, 12);//17
	cout << f() << endl;//14
	cout << o(5) << endl;//25
	a();//void function

// ========heigher order function =======
// syntax function return data type function name (function parameters, including another function) { function body}
auto fo = [](int x, int y, function <int(int, int)> g){return g(x, y);};auto smm = [](int x, int z, function<int(int, int)> s) {return s(x, z);};
function <int(int, int)> addd = [](int x, int f) {return ((x + f) * 2) / f;};
// i can use seprate function and use it as argument or declaring a function insted of argument
cout << smm(4, 8, addd) << endl;
cout << smm(4, 8, [](int x, int f) {return ((x + f) * 2) / f;}) << endl;

//========for_each with lambda function ==========
int f[] = { -1,3,5,-2,0,9,-5,-12 };
for_each(f, f + 8, [](int n)
{
	cout << n;
	if (n > 0)
	{
	cout << " is positive" << endl;
	}
	else if (n < 0) { cout << " is negative"<<endl ; }
	else { cout << " is zero" << endl; }
});
// ===== oop ======= class ========
string name;
cout << "Enter your f name" << endl;
cin >> name;
int age;
cout << " Enter your age" << endl;
cin >> age;
Human h1;
h1.get_values(name, age);
h1.print_values();

//===== constructors =====
a ahmed(26);
ahmed.print_age();

// ======= inheritance =====

C c;
c.print_age();
c.get_name();

// ======= function override =======
operation op;
op.sum(2, 5);

shape s;
Circle c;
Rectangle r;
s.info();
c.info();
r.info();
cout << "==========" << endl;
shape h[3]; // = any opject of the class and represents it
h[0] = shape();
h[1] = Circle();
h[2] = Rectangle();

for (auto &i : h)
{
	i.info();
}
cout << "==========" << endl;
A a;
a.draw(&s);
a.draw(&r);
a.draw(&c);
obj = { "Ahmed" , 10 };
cout << obj.name << "\n" << obj.x << endl;
a.info();

//===== destructors =====
R r(5);
R f(4);

//=== continue operator overloading === friend function ==
newclass m1(4);
newclass m2(2);
newclass m3(10+m1);
m3.print();

// ==== template or generic function====
sum <double , int>s;
sum <bool, string> z;
s.x = 5.4;
s.y = 4;
cout << s.Sum() << endl;
z.x = true;
z.y = "Ahmed";
cout << addd( 1, 2.25) << endl;

// ======== file  system ==========
	ofstream h; // for writing
	h.open("Example.text");
	string name;
	cout << "Enter your name" << endl;
	getline(cin, name);
	h << name <<endl;
	h << "mra wa7d atnin tlata" <<endl;
	char a[200];
	cin.getline(a, sizeof(a));
	h.write(a, sizeof(a));
	h.close();

	char a[200];
	ifstream h; // for reading
	h.open("Example.text");
	h.read(a, sizeof(a)); // or h >> a ;
	cout << a << endl;
	h.close();

	// ==== random =====

A a(12);
a.print();


list <int> A = { 1,2,3,4,5,5,6,8 };
//list <int> ::iterator z = A.begin();
A.remove_if([](int& n) {return n % 2 ==0;});

for (auto it = A.begin(); it != A.end(); it++) // or ranged >>>>>>> for (int &it : A){cout <<it << endl;}
{
	cout << *it << endl;
}

	map<int, char> m = { {1,'a'} ,{2,'b'} ,{4,'c'} ,{5,'t'} ,{3,'t'} ,{7,'g'} };

	map <int, char> ::iterator z = m.begin();

	cout << m[4] << " : " << m[7] << endl;

	for (auto i : m) { cout << i.first << " : " << i.second << endl; }

	vector <int> nums = { 3,3,4,1,6,0,8,6,9,2,7,4 };
	unordered_map <int, int> d;
	for (int i = 0; i < nums.size(); i++)
	{
		d[nums[i]] = i;
	}
	
	
	// print the output into separate txt file
car_output_details(cout);
ofstream car_details("car.txt");
car_output_details(car_details);

// ============try catch with limitation to accept only numeric inputs
try 
{ 
	int number;
	cout << "Enter any positive number" << endl;
	while (!(cin >> number)) { // for accepting numbers only
		cout << "Invalid input, please try again: ";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	if (number < 0) { throw "Erorr"; }
	cout << "your numbe is : " << number << endl;
}
catch (const char* x)
{
	cout << x << endl;
}


auto u = [](int x, int y,function <int (int,int)> g) {return g(x , y);};
cout << u(5, 4, [](int x, int y) {return 5 + 4;}) << endl;
int z[] = { 1,2,3,4,5,-10,2,0 };
for_each(z, z + 8, [](int n) {cout << n << endl;});

// ======= operator overloading + inheritance + function override + polymorphism=========
myclass m1(4);
myclass m2(8);
myclass m3 = m2 + m1;
m3.print();
myclass m4 = m2 * m1;
m4.print();
myclass m5 = m2 / m1;
m5.print();
myclass m6 = m2 - m1;
m6.print();
myclass m = m2 % m1;
m.print();
myclass m7 = m2;
m7.print();
// =========inheritance + function override =========
mrx a = 5;
a.print();
//======= polymorphism ==========
o g(12);
g.print();
// ======== unordered_map ===========
unordered_map <int, char> m = { { 1,'a'},{2,'b'},{3,'c'} };
unordered_map <int, char> ::iterator x = m.find(2);
x->second = 'z';
for (auto i : m)
{
	cout << i.first << " : " << i.second << endl;
}
*/

x g;
g.set_a(15);
print(g);
return 0;
}


