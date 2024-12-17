#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> hi2 = {2, 5, 2, 8, 5, 6, 8, 8};
    vector<pair<int, int>> hi;
    for (int i = 0; i < hi2.size(); i++)
    {
        hi.push_back({hi2[i], i});
    }
    sort(hi.begin(), hi.end());
    for (auto it = hi.begin(); it != hi.end(); it++)
    {
        pair<int, int> k = {(*it).first, hi2.size() + 2};
        auto it2 = upper_bound(it, hi.end(), k);
        cout << (*it).second << ' ' << distance(it, it2) << '\n';
        it = it2 - 1;
    }
}

// Version on words of a paragraph
// void textSplit(string &text, vector<string> &segments, char delimiter = ' ')
// {
//     text = text + delimiter;
//     int last = 0;
//     int wordIndex = 0;
//     for (int i = 0; i < text.size(); i++)
//     {
//         if (text[i] != delimiter)
//             continue;
//         if (i > last)
//         {
//             segments.push_back(text.substr(last, i - last));
//             wordIndex++;
//         }
//         last = i + 1;
//     }
// }

// string removeNonAlphabetic(string &str)
// {
//     string res = "";
//     for (char c : str)
//         if (isalpha(c) || c == ' ')
//             res += tolower(c);
//     return res;
// }

// int main()
// {
//     string para = "On 8 December 2024, Israel invaded the buffer zone between Syria and its Israeli-occupied Golan Heights, and carried out an aerial campaign targeting the Syrian Army's military capabilities, following the fall of the Assad regime. The invasion marked the first Israeli occupation of Syria in over 50 years, since the ceasefire agreements, which were established in the aftermath of the 1973 Yom Kippur War.[14] The Syrian civil war, which had erupted in 2012, saw rebel forces triumphing over the government forces of the Assad regime, and the consequent flight of Syrian President Bashar al-Assad on 8 December 2024. During the events of that day, the Syrian Army abandoned its positions along the United Nations Disengagement Observer Force (UNDOF) buffer area. Subsequently, Israeli Prime Minister Benjamin Netanyahu stated that this had voided the 1974 border agreement with Syria, and ordered the Israeli military to take control of the Purple Line, a demilitarized zone from which Israeli forces had withdrawn in 1974, until a new agreement could be reached with the emerging Syrian government.[15][16] Israel also launched extensive aerial and naval strikes on Syrian military targets across the country, under an operation codenamed Operation Arrow of Bashan (Hebrew: מבצע חץ הבשן, romanized: Mivtza Hetz HaBashan).[17][18] Israel's campaign destroyed Syria's navy, and military capabilities, as well as chemical weapons stockpiles. Israel declared its military objectives to be: the full occupation of the United Nations Disengagement Observer Force Zone, the establishment of a security zone free from heavy weaponry and military infrastructure, and the prevention of Iranian arms smuggling routes through Syria to Lebanon.[19] Israel's campaign in Syria drew international condemnation:[20] Syrian de facto leader Ahmed al-Sharaa criticized Israel's actions, saying they cannot justify their recent actions in Syria, but also stating that his country was not in a position to be drawn into a new conflict.[21] ";
//     removeNonAlphabetic(para);
//     para = removeNonAlphabetic(para);
//     vector<string> hi2;
//     textSplit(para, hi2);
//     vector<pair<string, int>> hi;
//     for (int i = 0; i < hi2.size(); i++)
//     {
//         hi.push_back({hi2[i], i});
//     }
//     sort(hi.begin(), hi.end());
//     for (auto it = hi.begin(); it != hi.end(); it++)
//     {
//         pair<string, int> k = {(*it).first, hi2.size() + 2};
//         auto it2 = upper_bound(it, hi.end(), k);
//         cout << (*it).first << ' ' << (*it).second << ' ' << distance(it, it2) << '\n';
//         it = it2 - 1;
//     }
// }
