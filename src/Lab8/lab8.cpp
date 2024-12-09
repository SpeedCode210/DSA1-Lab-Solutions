#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string concatenate(int day, int month, int year)
{
    string ds = to_string(day);
    while (ds.size() < 2)
        ds = "0" + ds;
    string ms = to_string(month);
    while (ms.size() < 2)
        ms = "0" + ms;
    string ys = to_string(year);
    while (ys.size() < 4)
        ys = "0" + ys;
    return ys + "-" + ms + "-" + ds;
}

void textStatistic(string sentence, int &CountVowel, int &CountConsonant,
                   int &CountDigit, int &CountWhiteSpace)
{
    string vowels = "AEIOUaeiou";
    CountVowel = 0;
    CountConsonant = 0;
    CountDigit = 0;
    CountWhiteSpace = 0;

    for (char c : sentence)
    {
        if (isalpha(c))
            (vowels.find(c) != string::npos ? CountVowel : CountConsonant)++;
        else if (isdigit(c))
            CountDigit++;
        else if (isspace(c))
            CountWhiteSpace++;
    }
}

string removeNonAlphabetic(string &str)
{
    string res = "";
    for (char c : str)
        if (isalpha(c) || c == ' ')
            res += c;
    return res;
}

int textSplit(string text, string segments[], char delimiter = ' ')
{
    text = text + delimiter;
    int last = 0;
    int wordIndex = 0;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] != delimiter)
            continue;
        if (i > last)
        {
            segments[wordIndex] = text.substr(last, i - last);
            wordIndex++;
        }
        last = i + 1;
    }

    return wordIndex;
}

void capitalizingFirstLetter(string &sentence)
{
    sentence[0] = toupper(sentence[0]);
    for (int i = 0; i < sentence.size() - 1; i++)
    {
        if (sentence[i] == ' ')
            sentence[i + 1] = toupper(sentence[i + 1]);
    }
}

int countWordOccurrences(string sentence, string W)
{
    transform(W.begin(), W.end(), W.begin(), ::tolower);
    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    string arr[5000];
    int len = textSplit(sentence, arr);
    int res = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == W)
            res++;
    }
    return res;
}

bool areWordsEqual(string a, string b)
{
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (tolower(a[i]) != tolower(b[i]))
            return false;
    return true;
}

void removeConsecutiveRepetitions(string &sentence)
{
    string arr[5000];
    int len = textSplit(sentence, arr);
    if (len == 0)
        return;
    string res = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (!areWordsEqual(arr[i - 1], arr[i]))
            res = res + " " + arr[i];
    }
    sentence = res;
}

string stop_words[] = {
    "a", "an", "and", "are", "as", "at", "be", "but", "by", "for", "if", "in", "into", "is", "it", "no", "not", 
    "of", "on", "or", "such", "that", "the", "their", "then", "there", "these", "they", "this", "to", "was", 
    "will", "with", "about", "after", "all", "also", "am", "any", "because", "been", "before", "being", "between", 
    "both", "can", "did", "do", "does", "doing", "down", "during", "each", "few", "from", "further", "had", 
    "has", "have", "having", "he", "her", "here", "hers", "him", "himself", "his", "how", "i", "me", "my", "myself", 
    "more", "most", "now", "off", "once", "only", "other", "out", "over", "own", "same", "she", "should", "so", 
    "some", "such", "than", "those", "through", "too", "under", "up", "very", "we", "what", "when", "where", 
    "which", "while", "who", "whom", "why", "you", "your", "yours", "yourself", "yourselves","zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"
};


int removeStopWord(string arrayOfWord[], int size)
{
    int currentIndex = 0;
    for(int i = 0; i < size; i++){
        string word = arrayOfWord[i];
        transform(word.begin(), word.end(),word.begin(), ::tolower);
        if(*lower_bound(stop_words, stop_words+110, word) != word){
            arrayOfWord[currentIndex] = arrayOfWord[i];
            currentIndex++;
        }
    }

    return currentIndex;
}

double Similarity(string Sentence1, string Sentence2){

    int sim = 0;
    string arr1[5000];
    string arr2[5000];

    int s1 = textSplit(Sentence1, arr1);
    int s2 = textSplit(Sentence2, arr2);
    s1 = removeStopWord(arr1, s1);
    s2 = removeStopWord(arr2, s2);
    if(s2 > s1){
        swap(s1,s2);
        swap(arr1,arr2);
    }
    sort(arr1, arr1+s1);

    for(int i = 0; i < s2; i++){
        string word = arr2[i];
        if(*lower_bound(arr1, arr1+s1, word) == word){
            sim++;
        }
    }

    return ((double)sim)/((double)s2);
}

string MostRelevantSentenceStopWord(string arrayOfSentence[], string question, int nbSentences){
    double maxSim = -1;
    int bestSentence = -1;
    question = removeNonAlphabetic(question);
    for(int i = 0; i < nbSentences; i++){
        string sentence = removeNonAlphabetic(arrayOfSentence[i]);
        double sim = Similarity(sentence, question);
        if(sim > maxSim){
            maxSim = sim;
            bestSentence = i;
        }
    }

    return arrayOfSentence[bestSentence];
}


int main()
{
    sort(stop_words, stop_words+110);

    string Text = "The history of programming languages spans from documentation of early mechanical computers to modern tools for software development. Early programming languages were highly specialized, relying on mathematical notation and similarly obscure syntax. Throughout the 20th century, research in compiler theory led to the creation of high-level programming languages, which use a more accessible syntax to communicate instructions. The first high-level programming language was created by Konrad-zuse in 1943. The first high-level language to have an associated compiler was created by Corrado B ohm in 1951. Konrad-zuse was born on 1910/06/22, in GERMANY, was a notable civil engineer, pioneering computer scientist, inventor, and businessman.";

    int _,spaces;
    string textArr[200];
    int nbSentences = textSplit(Text, textArr, '.');
    string question;
    getline(cin, question);
    cout << MostRelevantSentenceStopWord(textArr, question, nbSentences) << endl;
}