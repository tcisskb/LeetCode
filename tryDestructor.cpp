#include <iostream>

using namespace std;

class Simple{
private:
  int _id;
public:
  Simple(int i):_id(i){
  cout << _id << " alive!!"<<endl;
}
~Simple(){
  cout << _id << " died!!"<<endl;
}
};


void f()
{ Simple s(999);
cout << "End of f()"<<endl;
}
int main()
{ 
  Simple s(123), *sptr;
  int a=1;
  
  if (true) {
  Simple ss(456);
 }
 int b=2;
  cout<<b<<endl;

  f();
  sptr = new Simple(789);
  delete sptr;
  cout << "End of main"<<endl;
  
  return 0;
}
