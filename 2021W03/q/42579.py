""" 베스트앨범
  Link: https://programmers.co.kr/learn/courses/30/lessons/42579
"""
def solution(genres, plays):
  m = dict((g, []) for g in genres)
  for i, (g, p) in enumerate(zip(genres, plays)):
    m[g].append((i, p))
  a = sorted(m.items(), key=lambda kv: -sum(p for i, p in kv[1]))
  answer = list(i for g, v in a for i, p in sorted(v, key=lambda kv: -kv[1])[:2])
  return answer
