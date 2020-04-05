#include <iostream>

using namespace std;

class Vector {
  int* first = nullptr;
  size_t _size;

public:
  Vector(size_t size): _size(size) {
    first = new (nothrow) int[size] {1, 2, 33, 4, 5, 6,7,999};
  }

  size_t size() {
    return this->_size;
  }

  int at(size_t index) {
    return *(first + index);
  }

  int push(int item) {
    // Insert at the end here
    return item;
  }

  int deleteItem(size_t index) {
    int tmp = *(first + index);

    return tmp;
  }

  int find(int item) {
    for(size_t i = 0; i < _size; i++) {
      if(*(first + i) == item) {
        return i;
      }
    }

    return -1;
  }

  int pop() {
    int element = *(first + _size - 1);
    _size--;
    return element;
  }

  bool isEmpty() {
    return _size == 0;
  }

  ~Vector() {
    delete [] first;
  }

private:
  void resize() {

  }
};

int main() {

  Vector vector(8);

  cout << "Size = " << vector.size() << endl;
  cout << "Is Empty = " << vector.isEmpty() << endl;
  cout << "Index of 6 = " << vector.find(6) << endl;
  cout << "Index of 283(doesnt exists) = " << vector.find(283) << endl;
  cout << "Index of 283(doesnt exists) = " << vector.size() << endl;
  cout << "Pop " << vector.pop() << endl;
  cout << "Pop " << vector.pop() << endl;
  cout << "Pop " << vector.pop() << endl;
  cout << "Pop " << vector.pop() << endl;
  cout << "Index of 283(doesnt exists) = " << vector.size() << endl;


  return 0;
}
