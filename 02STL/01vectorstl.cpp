 #include<iostream>
 #include<vector>
 using namespace std;

void inputarr(std::vector<std::vector<int>>& arr,int row, int col){
   
   for (int i=0 ;i<row;i++){
     cout<<"give row: ";
       for (int j = 0; j < col; j++) {
          cin >> arr[i][j];
        cout<<endl;
    
                              


   }
   }
   
}//vector<vector<int>>arr

void serch(vector<vector<int>>arr,int row,int col,int value){
//  for(int i=0;i<row;i++){
//     for(int j=0;j<col;j++){
//         if(arr[i][j]==value){
//             cout <<i<<endl<<j;

//         }
//         else{
//             cout<<"not found"<<endl;
//         }
//  }
// }
    for( int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == value) {
                cout << "Found at position: (" << i << ", " << j << ")" << endl;
                return; // Exit the function if the value is found
            }
        }
    }
    cout << "Not found" << endl;
     
}

void Minvalue(vector<vector<int>>arr,int row,int col){

    int minvalue=INT8_MAX;
    for(int i=0;i<row; i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minvalue)
            minvalue=min(arr[i][j],minvalue);

        }
    }
    cout<<"Smallest  element in array"<<minvalue;
}
 
 
 
 
 
int main(){


/*instaltion of vector*/
int row=2;
int col=2;
vector<vector<int>> arr(row,vector<int>(col));


inputarr(arr,row,col);
int value;
cout<<"give in put value to find"<<endl;
cin>>value;
serch(arr,row,col,value);

 for (int i=0 ;i<row;i++){
    for (int j = 0; j < col; j++) {
       cout<<arr[i][j]<<endl;
       cout<<endl;

    }

 }
    return 0;
 
 }