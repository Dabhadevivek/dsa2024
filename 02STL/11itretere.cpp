#include<iostream>
#include<vector>
#include<algorithm>
#include <utility>
#include <string>
using namespace std;

void creatarr(vector<int>&arr,int sizes){
     for(int i=0;i<sizes;i++){

    arr.push_back(i);
}


}

int main(){

vector<int>arr;

creatarr(arr,10);

auto it=arr.begin();
while (it!=arr.end())
{
   cout<<*it<<endl;   
   it++; /* code */
}


pair<int,string>p;
p.first=1;
p.second="hello";



    return 0;
}




























/*An iterator in C++ is an object that points to an element within a container (such as an array, vector, list, etc.) and allows traversal through the container's elements. Iterators are a generalization of pointers and form a key component of the C++ Standard Template Library (STL), enabling algorithms to be written independently of the container types they operate on.

Key Concepts and Features of Iterators
Types of Iterators:

Input Iterator: Can only read elements while iterating forward. Example: std::istream_iterator.
Output Iterator: Can only write elements while iterating forward. Example: std::ostream_iterator.
Forward Iterator: Can read and write elements while iterating forward. Supports single-pass algorithms. Example: std::forward_list::iterator.
Bidirectional Iterator: Can read and write elements while iterating forward and backward. Example: std::list::iterator.
Random Access Iterator: Can read and write elements and supports constant-time access to any element. Example: std::vector::iterator, std::deque::iterator.
Iterator Operations:

Dereferencing (*): Accesses the value pointed to by the iterator.
Increment (++): Moves the iterator to the next element.
Decrement (--): Moves the iterator to the previous element (not available for input and output iterators).
Equality/Inequality (==, !=): Compares iterators.
Arithmetic Operations (+, -, etc.): For random access iterators, you can use these to move multiple steps or calculate the distance between iterators.
Iterator Traits:

Iterators provide information about their properties through traits, such as iterator_category, value_type, difference_type, pointer, and reference. These traits enable generic algorithms to optimize their behavior based on the type of iterator they are given.
Iterators and Algorithms:

Many STL algorithms (like sort, find, for_each, etc.) are designed to work with iterators, allowing them to operate on different container types in a uniform way.*/