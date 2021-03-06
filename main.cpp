#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void sortDescending(int&,int&,int&);
void swap(int&,int&);
/*
 * prompts the user for three numbers
 * calls sortDescending to sort the numbers
 * prints out the three numbers in descending order
 */
int main()
{
  int numA, numB, numC;
  cout<<"Enter any three numbers: ";
  cin>>numA>>numB>>numC;

  sortDescending(numA, numB, numC);
  
  cout<<"From greatest to least, they are: ";
  cout<<numA<<","<<numB<<","<<numC<<endl;
  return 0;
}

/*
 * Determines the greatest value and put it into first
 * the next greatest value into second
 * and the smallest value in third
 */
void sortDescending(int &first, int &second, int &third)
{
  if( first < third )
  {
    swap(first,third);
  }
  if( first < second )
  {
    swap(first,second);
  }
  if( second < third )
  {
    swap(second,third);
  }
}
/*
 * swaps the two numbes it recieves
 */
void swap(int &first, int &second)
{
  int temp = first;
  first = second;
  second = temp;
}
