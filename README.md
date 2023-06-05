<h1 align='center'>Computer Science</h1>

<p align="center">
  <strong>Algorithms and Solved Problems</strong><br>
</p>
<p align='center'>
  <img src='http://academic.uprm.edu/computersociety/images/events/competitive-programming.png' />
</p>


### Cheatsheets:

**CPP**:

https://github.com/ar-pavel/CP-CheatSheet

https://github.com/gibsjose/cpp-cheat-sheet/blob/master/Data%20Structures%20and%20Algorithms.md

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


// Initialization

float y{3.14f}; // y = 3.14


// LAMBDAS

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
