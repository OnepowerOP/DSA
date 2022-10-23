#include<iostream>
using namespace std;
struct Array 
{
    int A[10];
    int size;
    int length;
};
  void display(struct Array arr)
  {
    int i;
    for(i=0;i<arr.length;i++)
    {
      cout<<arr.A[i]<<" ";
    }
  }
  void append(struct Array *arr,int x)
  {
    if(arr->length<arr->size)
    {
      arr->A[arr->length++]=x;
    }
  }
  void insert(struct Array *arr, int index, int x)
  {
    int i;
    if(index>=0 && index<=arr->length)
    {
      for(i=arr->length;i>index;i++)
      {
        arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
      }
    }
  }
int main()
{
  struct Array arr1={{1,2,3,4,5},8,5};
  append(&arr1,10);
  display(arr1);
  return 0;
}