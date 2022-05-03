// https://www.youtube.com/watch?v=l6sbou-ssto
#include <iostream>
#include <deque>
using namespace std;


template < template <typename,typename...> class ContainerType, typename type, typename... types>

auto data_builder(type first, types... args){
    ContainerType<type> data{first, args...};

    return data;
}

int main(){
    auto data = data_builder<std::deque>(1,2,3,4,5);

    // cout << data << endl;
    // https://www.geeksforgeeks.org/dequebegin-dequeend-c-stl/
    for (auto it = data.begin(); it != data.end(); ++it)
        cout << ' ' << *it;

    return 0;
}