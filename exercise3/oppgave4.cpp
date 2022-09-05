#include <iostream>
#include <string>

using namespace std;

string buildWord(string word1, string word2, string word3);
int wordLength(string word);
string charTenToTwelve(string word);
string sentenceObject(string word);
string containsHallo(string word);
int countEr(string word);

int main() {
  // a)
  string word1;
  string word2;
  string word3;

  cout << "word 1: ";
  cin >> word1;
  cout << "word 2: ";
  cin >> word2;
  cout << "word 3: ";
  cin >> word3;

  // b)
  string sentence = buildWord(word1, word2, word3);
  cout << "Full sentence: " << sentence << endl;

  // c)
  cout << "word 1 length: " << wordLength(word1) << endl;
  cout << "word 2 length: " << wordLength(word1) << endl;
  cout << "word 3 length: " << wordLength(word1) << endl;
  cout << "sentence length: " << wordLength(sentence) << endl;

  // d)
  string sentence2 = sentence;

  // e)
  cout << charTenToTwelve(sentence2) << endl;

  // f)
  string sentence_start = sentenceObject(sentence);
  cout << sentence_start << endl;

  // g)
  cout << containsHallo(sentence) << endl;

  // h)
  cout << "Number of times 'er' is found: " << countEr(sentence) << endl;
}

string buildWord(string word1, string word2, string word3) {
  return word1 + " " + word2 + " " + word3 + ".";
}

int wordLength(string word) {
  return word.length();
}

string charTenToTwelve(string word) {
  for (size_t i = 9; i < 12; i++) {
    if (i > word.length())
      break;
    word[i] = 'x';
  }
  return word;
}

string sentenceObject(string word) {
  return (word.length() > 5) ? word.substr(0, 5) : word.substr(0, word.length());
}

string containsHallo(string word) {
  auto found = word.find("hallo");
  if (found != string::npos)
    return "Hallo found!";
  else
    return "Hallo not found";
}

int countEr(string word) {
  int count = 0;
  size_t finder = word.find("er");
  while (finder != string::npos) {
    count++;
    finder = word.find("er", finder + 1);
  }
  return count;
}
