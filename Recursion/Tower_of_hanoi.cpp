#include<iostream>
using namespace std;
void TOH(int n,int A, int B, int C)
{
  if(n>0)
  {
    TOH(n-1,A,C,B);
    cout<<A<<" to "<<C<<endl;
    TOH(n-1,B,A,C);
  }
}
int main()
{
  TOH(10,1,2,3);
}