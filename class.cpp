#include<bits/stdc++.h>

using namespace std;

void username(int n){

  if( n < 10){
   cout << "This number is not a valid number";
}else{
  cout << "This is a valid number";

}
}

int main(){
  
  int o;
  cout<< "enter a valid number";
  cin >> o;
  username(o);
  return 0;
   
}

