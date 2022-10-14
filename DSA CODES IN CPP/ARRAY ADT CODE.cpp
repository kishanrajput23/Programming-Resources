//construction of array ADT
#include<bits/stdc++.h>
using namespace std;
class ArrayADT
{
private:
  int capacity;
  int lastIndex;
  int *ptr;
public:
    ArrayADT ()
  {
    capacity = 0;
    lastIndex = -1;
    ptr = NULL;
  }
  void createArray (int capacity);
  int getItem (int index);
  void setItem (int index, int value);
  void editItem (int index, int value);
  int countItem ();
  void removeItem (int index);
  int searchItem (int value);
  void sortArray ();
  friend ostream& operator<<(ostream&,ArrayADT);
  ~ArrayADT(){
      delete []ptr;
  }
  ArrayADT(ArrayADT &List){    //copy constuctor making deep copy rather than making the shallow one .....
     capacity = List.capacity;
     lastIndex=List.lastIndex;
     ptr=new int[capacity];
     for (int i = 0; i <= List.lastIndex; i++) {
         ptr[i]=List.ptr[i];
     }
  }
};
ostream& operator << (ostream &dout,ArrayADT l){ // insertion overloading 
    if(l.lastIndex==-1){
        dout<<"\n list is empty";
    }
    else {
    for (int i = 0; i < l.countItem(); i++) {
        dout<<" "<<l.getItem(i);
    }
        
    }
    return(dout);
}
void
ArrayADT::createArray (int capacity)
{
  this->capacity = capacity;
  lastIndex = -1;
  ptr = new int[capacity];
}

int
ArrayADT::getItem (int index)
{
  if (lastIndex == -1)
    {
      cout << "\n List is empty";
      return (-1);
    }
  if (index > lastIndex || index < 0)
    {
      cout << "\n invalid index";
      return (-1);
    }
  return (ptr[index]);
}

void
ArrayADT::setItem (int index, int value)
{
  int i;
  if (lastIndex == capacity - 1)
    {
      cout << "\n overflow";
    }
  else if (index > capacity - 1 || index < 0)
    {
      cout << "\n Invalid index";
    }
  else if (index > lastIndex + 1)
    {
      cout << "\ninvalid index";
    }
  else if (index <= lastIndex)
    {
      lastIndex++;
      i = lastIndex;
      while (i != index)
	{
	  ptr[i] = ptr[i - 1];
	  i--;
	}
      ptr[index] = value;
    }
  else if (index == lastIndex + 1)
    {
      lastIndex++;
      ptr[index] = value;
    }
}

void
ArrayADT::editItem (int index, int value)
{
  if (index < 0 || index > lastIndex)
    {
      cout << "\n invalid index";
    }
  else
    {
      ptr[index] = value;
    }
}

int
ArrayADT::countItem ()
{
  return (lastIndex + 1);
}

void
ArrayADT::removeItem (int index)
{
  int i;
  if (index < 0 || index > lastIndex)
    {
      cout << "\neither invalid or underflow ";
    }
  else if (index < lastIndex)
    {
      i = index;
      while (i != lastIndex)
	{
	  ptr[i] = ptr[i + 1];
	  i++;
	}
      lastIndex--;
    }
  else if (index == lastIndex)
    {
      lastIndex--;
    }
}

int
ArrayADT::searchItem (int value)
{
  if (lastIndex == -1)
    {
      cout << "\n list is empty";
      return (-1);
    }
  int i;
  for (int i = 0; i <= lastIndex; i++)
    {
      if (ptr[i] == value)
	{
	  return (i);
	}
    }
  return (-1);
}

void
ArrayADT::sortArray ()
{
  int r, i, t;
  for (r = 1; r < countItem (); r++)
    {
      for (i = 0; i < countItem () - r; i++)
	{
	  if (ptr[i] > ptr[i + 1])
	    {
	      t = ptr[i];
	      ptr[i] = ptr[i + 1];
	      ptr[i + 1] = t;
	    }
	}
    }
}

int
main ()
{
  ArrayADT l1;
  l1.createArray (5);
  l1.setItem (0, 10);
  l1.setItem (1, 20);
  l1.setItem (2, 34);
  l1.setItem (3, 45);
  l1.editItem (2, 35);
//   int x = l1.countItem ();
//   cout << x << endl;
//   l1.removeItem (2);
//   int y = l1.countItem ();
//   cout << y << endl;
//   int z = l1.searchItem (45);
//   cout << z << endl;
//   l1.sortArray ();
  cout<<l1;
// cout<<l1.getItem(3);
}
