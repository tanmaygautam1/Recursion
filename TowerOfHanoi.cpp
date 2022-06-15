#include <iostream>
using namespace std;
void TOH(int n, char source, char dest, char aux){
  if (n==1){
    cout<<"Move Disc ["<<n<<"] from "<<source<<" to "<<dest<<endl;
    return; 
  }
  TOH(n-1,source,aux,dest);
    cout<<"Move Disc ["<<n<<"] from "<<source<<" to "<<dest<<endl;
    TOH(n-1,aux,dest,source);}
    int main(){
      int x;
    cout<<"Enter the number of discs:";
    cin>>x;
    TOH(x,'A','C','B');
    return 0;
    }

