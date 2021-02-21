""" 불량 사용자
  Link: https://programmers.co.kr/learn/courses/30/lessons/64064
"""
def is_matched(query, word):
  if len(query) != len(word):
    return False
  return not any(q != '*' and q != w for q, w in zip(query, word))

def solution(user_id, banned_id):
  m = dict((i, list(u for u in user_id if is_matched(b, u))) for i, b in enumerate(banned_id))
  import itertools
  ps = set(tuple(sorted(p)) for p in itertools.product(*m.values()) if len(set(p)) == len(banned_id))
  return len(ps)
