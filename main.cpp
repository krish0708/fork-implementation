
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
