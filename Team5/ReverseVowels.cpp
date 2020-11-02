class Solution {
private:
  bool m_isVowel(char ch)
  {
    return (
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
  }

public:
  string reverseVowels(string s)
  {
    int length = s.length();
    int front = 0, end = length - 1;
    char tmp;

    while (front < end)
    {
      if (!m_isVowel(s[front]))
      {
        front++;
      }
      else if (!m_isVowel(s[end]))
      {
        end--;
      }
      else
      {
        tmp = s[front];
        s[front++] = s[end];
        s[end--] = tmp;
      }
    }
    return s;
  }
};
