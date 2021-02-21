""" [1차] 비밀지도
  Link: https://programmers.co.kr/learn/courses/30/lessons/17681
"""
def solution(n, arr1, arr2):
  m = list(arr1[i] | arr2[i] for i in range(n))
  def binary(x):
    c = 0
    while x > 0:
      yield x % 2
      x //= 2
      c += 1
    for i in range(n - c):
      yield 0
  return list(''.join(" #"[b] for b in reversed(list(binary(x)))) for x in m)
