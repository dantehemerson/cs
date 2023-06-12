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



Create table with columns: Operation, Description

| Operation | Description |
| ------------- | ---------------------------------------------- |
| `swap(a, b)` | Swaps the values of a and b. |
| **strings** | |
| `to_string(12.05)` | Converts the number to a string. |
| `substr(start_index=m, length=n)` | Returns a substring of n characters starting at index m. |




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
