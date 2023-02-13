#include <bits/stdc++.h>

#define ANIM 12
#define TRAITS 9
using namespace std;
bool traits[ANIM][TRAITS] = {
  {
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0
  },
  {
    0,
    1,
    0,
    1,
    1,
    0,
    0,
    0,
    0
  },
  {
    0,
    1,
    0,
    1,
    0,
    0,
    0,
    0,
    0
  },
  {
    1,
    0,
    0,
    1,
    0,
    1,
    0,
    0,
    0
  },
  {
    1,
    0,
    0,
    1,
    0,
    0,
    1,
    0,
    0
  },
  {
    1,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0
  },
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
  },
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1
  },
  {
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
  },
  {
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0
  },
  {
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0
  },
  {
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    1,
    0
  }
};
string questions[TRAITS] = {
  "it have wing\n",
  "Have fur?\n",
  "Ink Machine\n",
  "Tail\n",
  "orange????\n",
  "high fly?\n",
  "rAiNfOreSt\n",
  "fins\n",
  "slik\n"
};
string output[ANIM] = {
  "Capybara\n",
  "Fox\n",
  "Rabbit\n",
  "Eegle\n",
  "Parrottt\n",
  "Crow\n",
  "wormius\n",
  "Catepillar\n",
  "Womanbug\n",
  "Slamon\n",
  "Sqiud Games\n",
  "Shark\n"
};
int main() {
    set < int > possible;
    int index = 0;
    bool inp;
    for (int i = 0; i < ANIM; i++) {
        possible.insert(i);
    }
    while (1) {
        if (possible.size() == 0) {
            cout << "Coming In Next Update...\n";
            break;
        }
        if (possible.size() == 1) {
            cout << output[*possible.begin()];
            break;
        };
        cout << questions[index];
        cin >> inp;
        vector < int > toremove;
        for (set < int > ::iterator i = possible.begin(); i != possible.end(); i++) {
            if (traits[*i][index] != inp) toremove.push_back(*i);
        }
        for (int i = 0; i < toremove.size(); i++) {
            possible.erase(toremove[i]);
        }
        index++;
    }
    return 0;
}