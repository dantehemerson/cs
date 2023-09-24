<h1 align='center'>Computer Science</h1>

<p align="center">
  <strong>Algorithms and Solved Problems</strong><br>
</p>
<p align='center'>
  <img src='http://academic.uprm.edu/computersociety/images/events/competitive-programming.png' />
</p>



## Sorting Algorithms

| Algorithm | Time Complexity | Space Complexity | Stable |
| --------- | --------------- | ---------------- | ------ |
| Bubble    | O(n^2)          | O(1)             | Yes    |
| Insertion | O(n^2)          | O(1)             | Yes    |
| Selection | O(n^2)          | O(1)             | No     |
| Merge     | O(n log(n))     | O(n)             | Yes    |
| Quick     | O(n log(n))     | O(log(n))        | No     |
| Heap      | O(n log(n))     | O(1)             | No     |

### Cheatsheets:

**CPP**:

https://github.com/ar-pavel/CP-CheatSheet

https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data%20Structures%20and%20Algorithms.md

Table with cpp types and their size and range in  a table:

| Type | Size (bytes) | Range |
| ---- | ------------ | ----- |
| short | 2 | -2^15 to 2^15 - 1 |
| int  | 4            | -2^31 to 2^31 - 1 |
| unsigned int | 4 | 0 to 2^32 - 1 |
| long long | 8 | -2^63 to 2^63 - 1 |
| unsigned long long | 8 | 0 to 2^64 - 1 |
| float | 4 | 1.2E-38 to 3.4E+38 |
| double | 8 | 2.3E-308 to 1.7E+308 |
| long double | 16 | 3.4E-4932 to 1.1E+4932 |
| char | 1 | -128 to 127 |
| unsigned char | 1 | 0 to 255 |
| bool | 1 | true or false |



| Operation | Description | Time Complexity | Space Complexity |
| ------------- | ---------------------------------------------- | ------------ | ------------- |
| `swap(a, b)` | Swaps the values of a and b. | | |
| **Algorithm** | | | |
| `min(a, b)` | Returns the minimum of a and b. | | |
| `max(a, b)` | Returns the maximum of a and b. | | |
| `max_element(v.begin(), v.end(), [](int a, int b) { return a < b; })` | Returns an iterator pointing to the element with the largest value in the vector. | `O(n)` | `O(1)` |
| **Vectors** | | | |
| `vector<int> v{1, 2}` <br/> `vector<int> v = {1, 2}` | Initializes a vector with the given values. | | |
| `vector<int> v(n, 1)` | Initializes a vector of size `n` with all values set to `1`. | | |
| `v.empty()` | Returns `true` or `false` depending on whether the vector is empty. | | |
| `v.back()` | Returns the last element of the vector. Similar to `v[v.size() - 1]`. | | |
| `v.front()` | Returns the first element of the vector. Similar to `v[0]`. | | |
| `v.pop_back(val)` | Removes the last element of the vector. | | |
| `v.push_front(val)` | Adds a new element to the beginning of the vector. | | |
| `sort(v.begin(), v.end())` | Sorts the vector. In `vector<pair<A, B>>`, by default it sorts by the first element of pairs. | | |
| **Stacks** | | | |
| `s.empty()` | Returns `true` or `false` depending on whether the stack is empty. | | |
| `s.top()` | Returns the top element of the stack. | | |
| `s.push(val)` | Adds a new element to the top of the stack. | | |
| `s.emplace(1, 2)` | Similar to `s.push(make_pair(1, 2))`, or pass the params to any constructor. | | |
| **Strings** | | | |
| `to_string(12.05)` | Converts the number to a string. | | |
| `s.substr(start_index=m, length=n)` | Returns a substring of n characters starting at index m. | | |
| `s.push_back('a')` | Adds a new character to the end of the string. | | |
| `s.pop_back()` | Removes the last character of the string. | | |
| **Maps**(`unordered_map`) | | | |
| `m.find(key) == m.end()` | Returns true if the **key is not found** in the map. | `O(1)` | `O(1)` |
| `m.emplace` (C++11) | Inserts a new key-value pair into the map. | `O(1)` | `O(1)` |
| `if (m.count(key))` | Returns > 1 if the **key is found** in the map, or `0` if not found | `O(1)` | `O(1)` |
| **Sets** | | | |
| `s.insert(val)` | Inserts a new value to the set | | |
| `s.erase(val)` | Deleted a value to the set | | |
| `s.count(val)` | Returns > 1 if the **`val` is found** in the set, or `0` if not found | `O(1)` | `O(1)` |


```cpp

// ===== Maps

// create a map
map<string, number> m;


// Values of a map
std::vector<std::string> values;
for (const auto& pair : myMap) {
  values.push_back(pair.second);
}



// ==== Loops

// for of
for (string str: strs)



// ==== ARRAYS

// initialize with zeros
int count[26] = {0};


// Map from array: This is bettern thatn using a set, easly find.
unordered_map<int, bool> hashNums;
for(int& num: nums) {
    hashNums.emplace(num, true);
}


// Accessing to map:
// 1. Using the [] operator on an unordered_map adds a new item with the specified key if it doesn't already exist, even when reading.
// 2. Accessing a non-existent key with [] initializes the value to a default-initialized value (e.g., 0 for int) and returns a reference to it.
// 3. To check if a key exists in the map without modifying it, use the count() or find() functions instead of the [] operator.

// example: Use find:
// hashNums.find(1) ==  hashNums.end()
// otherwise if we use hashNums[1], it will add a new item with the specified key if it doesn't already exist



// Initialization

float y{3.14f}; // y = 3.14

// Fixed size vector
std::vector<int> myVector(10); // Create vector of fixed size 10


// Map


// Fixed matrix, vector of vector
std::vector<std::vector<int>> nums(10, std::vector<int>());

// Set from an array
std::set<int> mySet(vec.begin(), vec.end());

// Iterate

// iterate over a map
for (auto& x: m) {
    std::cout << x.first << ": " << x.second << std::endl;
}

// Iterate over a set
for (const auto& element : mySet) {
  std::cout << element << " ";
}
// or:
std::set<int>::iterator it;
for (it = mySet.begin(); it != mySet.end(); ++it) {
    std::cout << *it << " ";
}


// use always unorderd_map instead of map, except when you need to iterate over the map in order
// Note: map order by key
unordered_map<int, int> counter;

// Vectro
// emplace_back vs push_back
keyValueVector.emplace_back(pair.first, pair.second); // pass the params to the contructor
// the same as:
keyValueVector.push_back(std::make_pair(pair.first, pair.second));

// Created vector from map
// Copy the key-value pairs to a vector
    std::vector<std::pair<int, std::string>> sortedPairs(myMap.begin(), myMap.end());

// BETTER SOLUTION TO:

// Convert map to vector to allow sorting
std::vector<std::pair<int, std::string>> keyValueVector;
// Convert map to vector of key-value pairs
for (const auto& pair : myMap) {
    keyValueVector.emplace_back(pair.first, pair.second);
}



// LAMBDAS, SORT

// sort by second element
// example 1:
sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
    return a.second < b.second;
});

// example 2:
std::sort(x, x + n,
  // Lambda expression begins
  [](float a, float b) {
      return (std::abs(a) < std::abs(b));
  } // end of lambda expression
);


// uppercase every char in a string
std::string g {"hello"};
std::for_each(g.begin(), g.end(), [](char& c) // modify in-place
{
    c = std::toupper(static_cast<unsigned char>(c));
});


// Parsing

// number to string
std::to_string(10); // "10"


// no named vector
// Return n first items of vector
return vector<int>(result.begin(), result.begin() + k);


```


**Typescript**:

```ts

// Create array of n size and fill with value
Array(26).fill(0);

```

### My profiles

- [Codeforces](https://codeforces.com/profile/dantehemerson)
- [LeetCode](https://leetcode.com/dantehemerson/)
- [Hackerrank](https://www.hackerrank.com/dantehemerson?hr_r=1)
- [UVA - uHunt](https://uhunt.onlinejudge.org/id/840077)
- [COJ](https://coj.uci.cu/user/useraccount.xhtml?username=dantehemerson)

### History (Commits)

| Emoji         | Description                                    |
| ------------- | ---------------------------------------------- |
| :green_heart: | This means that the problem is solved.         |
| :heart:       | This means that the problem is not solved yet. |
