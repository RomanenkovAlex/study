class Solution:
  def backspaceCompare(self, s: str, t: str) -> bool:
    slovo_s = []
    slovo_t = []
    for i in s:
      if i != "#":
        slovo_s.append(i)
      else:
        slovo_s.pop()
    for j in t:
      if j != "#":
        slovo_t.append(j)
      else:
        slovo_t.pop()	
    return slovo_s == slovo_t