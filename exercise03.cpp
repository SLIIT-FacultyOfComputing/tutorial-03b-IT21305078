#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
struct book
{
int height, length, width;
}book1, book2;
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
  struct book;
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> book1. height;
    cout << "Enter Box 1 Width : ";
    cin >> book1.width;
    cout << "Enter Box 1 Length : ";
    cin >> book1. length;
    
    cout << "Enter Box 2 Height : ";
    cin >> book2. height;
    cout << "Enter Box 2 Width : ";
    cin >> book2. width;
    cout << "Enter Box 2 Length : ";
    cin >> book2. length;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume(book1. height ,book1.width , book1. length)
             + volume(book2. height ,book2.width ,book2. length );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height, int width, int length)
{
  return height * width * length;
}