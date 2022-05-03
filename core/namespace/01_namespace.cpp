// Creating namespaces
#include <iostream>
using namespace std;
namespace ns1
{
	int value() { return 5; }
}
namespace ns2
{
	const double x = 100;
	double value() { return 2*x; }
}
// extending namespace
namespace ns1{
    int a = 2;
}
// extending std namespace
namespace std{
    string std_namespace = "std_namespace";
}
 
int main()
{   
//      error: ‘namespace’ definition is not allowed here
//    17 |     namespace ns3{
//       |     ^~~~~~~~~
//     namespace ns3{
//         int a = 2;
//     }
    // Access value function within ns1
    cout << ns1::value() << '\n';

    cout << ns1::a << endl;


    // Access value function within ns2
    cout << ns2::value() << '\n';

    // Access variable x directly
    cout << ns2::x << '\n';	

    cout << std_namespace << endl;

    return 0;
}


// OUTPUT:
// 5
// 200
// 100

