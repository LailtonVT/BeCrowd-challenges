#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

pair<int, string> parseCard(const string& card) {
    map<string, int> numberMap = {{"um", 1}, {"dois", 2}, {"tres", 3}};
    map<string, string> shapeMap = {
        {"circulo", "circulo"}, {"circulos", "circulo"},
        {"quadrado", "quadrado"}, {"quadrados", "quadrado"},
        {"triangulo", "triangulo"}, {"triangulos", "triangulo"}
    };
    size_t spacePos = card.find(' ');
    string number = card.substr(0, spacePos);
    string shape = card.substr(spacePos + 1);
    return {numberMap[number], shapeMap[shape]};
}

bool isValidSet(const vector<pair<int, string>>& combo) {
    set<int> numbers;
    set<string> shapes;
    for (const auto& card : combo) {
        numbers.insert(card.first);
        shapes.insert(card.second);
    }
    return (numbers.size() != 2 && shapes.size() != 2);
}

int countSets(const vector<pair<int, string>>& cards) {
    int count = 0;
    int n = cards.size();
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            for (int k = j + 1; k < n; ++k) {
                vector<pair<int, string>> combo = {cards[i], cards[j], cards[k]};
                if (isValidSet(combo)) {
                    if (cards[i] == cards[j] && cards[j] == cards[k]) {
                        int occurrences = count_if(cards.begin(), cards.end(), [&](const pair<int, string>& c) {
                            return c == cards[i];
                        });
                        if (occurrences >= 3) {
                            count++;
                        }
                    } else {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n == 0) break;
        cin.ignore();
        vector<pair<int, string>> cards;
        for (int i = 0; i < n; ++i) {
            string card;
            getline(cin, card);
            cards.push_back(parseCard(card));
        }
        cout << countSets(cards) << endl;
    }
    return 0;
}
