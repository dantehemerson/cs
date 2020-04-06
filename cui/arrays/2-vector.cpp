#include <iostream>

using namespace std;

class Vector {
  int* arr = nullptr;
  size_t _size;
  size_t _capacity;

public:
  Vector(size_t size): _size(size), _capacity(size) {
    arr = new (nothrow) int[size] {1, 2};
  }

  size_t size() {
    return this->_size;
  }

  size_t capacity() {
    return this->_capacity;
  }

  int at(size_t index) {
    return *(arr + index);
  }

  int push(int item) {
    if(this->_size == this->_capacity) {
      // Resize to double capacity
      resize(this->_capacity *= 2);
    }

    arr[this->_size] = item;
    this->_size++;

    return item;
  }

  int insert(int index, int item) {
    if(this->_size == this->_capacity) {
      // Resize to double capacity
      resize(this->_capacity *= 2);
    }
    for(int i = this->_size - 1; i >= index; i--) {
      arr[i + 1] = arr[i];
    }
    arr[index] = item;
    this->_size++;

    return arr[index];
  }

  int prepend(int item) {
    return this->insert(0, item);
  }

  int deleteItem(int index) {
    int tmp = *(arr + index);

    for(int i = index; i < this->_size; i++) {
      arr[i] = arr[i + 1];
    }

    this->_size--;

    return tmp;
  }

  int remove(int item) {

    for(int i = 0; i < this->_size; i++) {
      continue;
    }

    return item;
  }

  int find(int item) {
    for(size_t i = 0; i < _size; i++) {
      if(*(arr + i) == item) {
        return i;
      }
    }

    return -1;
  }

  int pop() {
    int element = *(arr + _size - 1);
    _size--;
    if(_size <= _capacity/4) {
      resize(_capacity /= 4);
    }
    return element;
  }

  void listElements() {
    for(int i = 0; i < _size; i++) {
      cout << arr[i] << ", ";
    }
    cout << "   size = " << this->size() << endl;
  }

  bool isEmpty() {
    return _size == 0;
  }

  ~Vector() {
    delete [] arr;
  }

private:
  void resize(size_t newCapacity) {
    int* newArray = new int[newCapacity];
    for(size_t i = 0; i < _size; i++) {
      newArray[i] = arr[i];
    }
    // Free the last array
    delete[] arr;
    arr = newArray;
  }
};

int main() {

  Vector vector(2);

  cout << "Size = " << vector.size() << endl;
  vector.listElements();
  vector.push(1);
  vector.push(3);
  vector.push(90);
  vector.push(4);
  vector.push(5);
  vector.push(6);
  vector.push(7);
  vector.listElements();
  vector.insert(9, 123456);
  vector.prepend(999);

  vector.listElements();
  vector.deleteItem(2);
  vector.listElements();


  return 0;
}
