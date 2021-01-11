""" 조이스틱
    Link: https://programmers.co.kr/learn/courses/30/lessons/42860
"""
def solution(name):
  # up_and_down = 0
  # middle_of_index = (ord('Z') - ord('A') + 1) // 2
  # for c in name:
  #   relative_index = middle_of_index - abs(ord(c) - ord('A') - middle_of_index)
  #   up_and_down += relative_index
  # left_and_right = len(name) - 1
  # for i, c1 in enumerate(name):
  #   if c1 == 'A':
  #     return_back = (i - 1) * 2
  #     endpoint = i + 1
  #     while endpoint < len(name) and name[endpoint] == 'A':
  #       endpoint += 1
  #     for j, c2 in enumerate(name[i + 1:]):
  #       if c2 != 'A':
  #         endpoint = j + (i + 1)
  #         break
  #     left_and_right = min(left_and_right, return_back + len(name) - endpoint)
  # return up_and_down + left_and_right
  l, m = len(name), (ord('Z') - ord('A') + 1) // 2
  cs = [ ord(c) - ord('A') for c in name ]
  return sum(m - abs(c - m) for c in cs) + min((*[ (i - 1) * 2 + l - (next(k for k, c2 in enumerate(cs[j:]) if c2 > 0) + j) if j < l else j for i, c1 in enumerate(cs) if c1 == 0 and (j := i + 1) < l ], l - 1))
