#include <iostream>
#include <cctype>
using namespace std;

/*
A frog can jump across water (0) to stones (1) in an array.  
The frog starts at speed 1, and can either speed up, slow down, or remain at the same speed.  Given an array of stones and water, return true 
if the frog can make it to the other side.
 */

bool frog(int [], int, int);

const  int length = 4;
int main(){

  int input_pass[] = {1,1,1,0};
  bool can_pass = frog(input_pass, 0,1);
  if (can_pass) {
    cout <<"the frog can pass! "<< endl;
  }else {
    cout << "frog cannot pass :(" << endl;
 }
  return 0;
}

bool frog(int array[], int cursor, int speed){
  //if we splash into water return false

  
  if (cursor+speed > length){
    cout << "frog success!"<<endl;
    return true;
  }
  if(array[cursor+speed] == 0 || (speed < 1)){
    cout <<"frog fail :("<<endl;
	       
    return false;
  }else{
    cout <<"moving forward!" << endl;
    bool val1 = frog(array,cursor+speed, speed);
    bool val2 = frog(array,cursor+speed, speed+1);
    bool val3 = frog(array,cursor+speed, speed-1);
    return val1 || val2 || val3;
  }
  
}


