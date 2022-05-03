#include <iostream>

using namespace std;
// typename and class are interchangeable above c++ 20
template <typename t1,class t2>
class A{

    public:
    t1 x = 100;
    t2 foo = true;

};

template <class t1,class t2>
class B{
    public:
    t1 x = "hello world";
    t2 bar = "any thing";
};
// possible syntax

template <template <typename t1,typename t2> class T, // T is the template 
typename t1,typename t2> // t1 and t2 are template template parameter ie. template parameter of another template 
// T is just Template ,and t1 is template argument
class C{

    public:
    // this is class A
    T<t1,t2> class_A_or_B_object;

    // // this is class B
    // T<t1> class_B_object;
}; 

int main(){
    // template A with int and bool as template argument
    C<A,int,bool> a;
    
    // template B with string and string as template argument
    C<B,string,string> b;

   
    // 
    cout << a.class_A_or_B_object.x << endl;
    cout << a.class_A_or_B_object.foo << endl;

    cout << b.class_A_or_B_object.x << endl;
    cout << b.class_A_or_B_object.bar << endl;


    return 0;
}

// https://stackoverflow.com/questions/213761/what-are-some-uses-of-template-template-parameters