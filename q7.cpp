#include <iostream>
#include<iomanip>
using namespace std;

int main() {

  int arr[3][5];


  for (int i = 0; i < 3; i++) {
    for (int k = 0; k < 5; k++) {
      cout << "Enter arr[" << i << "][" << k << "]: ";
      cin >> arr[i][k];
    }
  }



  for(int i=0;i<3;i++)
{

    for(int k=0;k<5;k++)
    {
        cout<<arr[i][k]<<" ";
    }
    cout<<endl;
}
 
 

  return 0;
}