#include<iostream>
#include<vector>
using namespace std;

int main(){
 vector<int>arr;

 for(int i; i<10; i++){
    arr.push_back(i);
}
 
 cout << "Address of the first element: " << &arr[0] << endl;

 cout << "First element: " << *arr.begin() << endl;//similerly .rnd()
 cout << "Last element: " << *(arr.rbegin()) << endl;
 cout << "Size of the vector: " << arr.size() << endl; 
 cout<<"fist elem"<<arr.front()<<endl;
 cout<<"last elem"<<arr.back()<<endl;
cout<<"vector cap"<<arr.capacity()<<endl;
cout<<"vector max size"<<arr.max_size()<<endl;
cout<<"vector size"<<arr.size()<<endl;
  
//cout<<"vector reserve make fixed size"<<arr.reserve(80)<<endl;
cout<<"vector empty"<<arr.empty()<<endl;  

 arr[1]=0;


 vector<int>arr2;
 
 for(int i; i<10; i++){
    arr2.push_back(i);
}
arr.swap(arr2);/*swap of elemntes of 1 with other*/
//creat nad iterrator for travel and vector
vector<int>::iterator it =arr.begin();
while (it != arr.end()){
    cout<<*it<<endl;
    it++;

  
}



    return 0;
}