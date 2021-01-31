""" 후보키
  Link: https://programmers.co.kr/learn/courses/30/lessons/42890
"""
def solution(relation):
  columns = list(zip(*relation))
  indices = list(range(len(columns)))
  candidates = []
  import itertools
  for i in range(len(indices)):
    combinations = []
    for combination in itertools.combinations(indices, i + 1):
      for candidate in candidates:
        if set(candidate) == set(combination).intersection(set(candidate)):
          break
      else:
        combinations.append(combination)
    for combination in combinations:
      cs = list(zip(*(columns[index] for index in combination)))
      if len(cs) == len(set(cs)):
        candidates.append(combination)
  return len(candidates)
