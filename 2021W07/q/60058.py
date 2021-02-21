""" 괄호 변환
  Link: https://programmers.co.kr/learn/courses/30/lessons/60058
"""
def is_balanced(w):
  import collections
  c = collections.Counter(w)
  return c['('] == c[')']

def is_correct(w):
  a = 0
  for c in w:
    if c == '(':
      a += 1
    elif c == ')':
      if a == 0:
        return False
      a -= 1
  return True

def solution(w):
  l = len(w)
  if l == 0:
    return w
  u, v = '', ''
  for i in range(2, l + 1, 2):
    u = w[:i]
    v = w[i:]
    if is_balanced(u):
      break
  if is_correct(u):
    return u + solution(v)
  return '(' + solution(v) + ')' + u[1:-1].replace('(', '_').replace(')', '(').replace('_', ')')
