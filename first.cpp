#include<iostream>
using namespace std;

int main(){

     int i=10, j=20, k;
        //10  //9  //19  //21   //9  //20   //10  //19
     k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
     cout<<i<<endl;
     cout<<j<<endl;
     cout<<k<<endl;
cout<<"extra added content"<<endl;   

return 0;
}
