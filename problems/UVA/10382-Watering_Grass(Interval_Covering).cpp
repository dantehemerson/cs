#include <bits/stdc++.h>

using namespace std;

bool comp(const pair<double,double> &a, const pair<double, double> &b) {
    if (a.first == b.first) {
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}

int main() {
  int sprinklersCantity;
  double loong, wide;
  double sprinklerPos, sprinklerRad;

  while(cin >> sprinklersCantity >> loong >> wide) {
      vector<pair<double, double>> sprinklers;
      for (int i = 0; i < sprinklersCantity; i++) {
        cin >> sprinklerPos >> sprinklerRad;

        if(sprinklerRad < wide/2.0) continue;
        double dx = sqrt(pow(sprinklerRad, 2) - pow(wide/2.0, 2));
        // Create interval
        sprinklers.push_back(pair<double, double>(sprinklerPos - dx, sprinklerPos + dx));
      }

      // Sort by increasing left endpoint and by decreasing right endpoint if ties arise.
      sort(sprinklers.begin(), sprinklers.end(), comp);
      // sort(sprinklers.begin(), sprinklers.end(), [](auto &a, auto &b) {
      //   return a.first == b.first ? a.second > b.second : a.first < b.first;
      // });

      int result = 0;
      double current = 0;
      for(size_t i = 0; i < sprinklers.size(); i++) {
        if(current >= loong) break;

        if(sprinklers[i].first <= current) {
          result++;

          for(size_t j = i + 1; j < sprinklers.size(); j++) {
            if(sprinklers[j].first <= current && sprinklers[j].second > sprinklers[i].second) {
              i = j;
            } else if(sprinklers[j].first > current) {
              break;
            }
          }

          current = sprinklers[i].second;
        } else {
          result = -1;
          break;
        }
      }

      if(current < loong) result = -1;

      cout << result << endl;
  }
  return 0;
}

