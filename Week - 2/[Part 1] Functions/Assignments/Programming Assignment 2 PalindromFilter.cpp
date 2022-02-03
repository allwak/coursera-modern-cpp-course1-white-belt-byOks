bool IsPalindrom(string word) {
  int word_length = word.size();
  
  for(int i = 0; i < word.size() / 2; ++i) {
      int j = word_length - i - 1;
      if (word[i] != word[j]) {
        
        return false;
      }
    }
  
  return true;
}

vector<string> PalindromFilter(vector<string> words, int minLength) {
  vector<string> final_vector;
  
  for(auto word: words) {
    if(word.size() >= minLength && IsPalindrom(word)) {
      final_vector.push_back(word);
    }
  }
  return final_vector;
}
