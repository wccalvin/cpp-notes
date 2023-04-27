#include <iostream>
using namespace std;

/*
 * change the values of each row and col to 1 instead of 0 in the array;
 * print out rows and columns of the array;
 * */

int main()
{

  int rows = 6;
  int cols = 6;

  float matrix[rows][cols] = {
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
      {0, 0, 0, 0, 0, 0},
  };

  // your code goes here
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      matrix[i][j] = 1;
    }
  }

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      cout << matrix[i][j];
    }
    cout << endl;
  }
}
