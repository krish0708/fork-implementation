/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
#include<unistd.h>
#include<signal.h>

using namespace std;

int main(){
  sleep(3);
  int c1 = fork();
  int c2 = fork();

  cout<<"pID: "<<getpid()<<", ";
  cout<<"ppID: "<<getppid()<<endl;
  sleep(3);

  if(c1 && c2){
    kill(getpid(), SIGKILL);
  }
  sleep(2);
  cout<<"pid and ppID after killing parent"<<endl;
  cout<<"pID: "<<getpid()<<", ";
  cout<<"ppID: "<<getppid()<<endl;
  sleep(2);
}