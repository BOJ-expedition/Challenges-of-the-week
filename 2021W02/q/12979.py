""" 기지국 설치
  Link: https://programmers.co.kr/learn/courses/30/lessons/12979
"""
def solution(n, stations, w):
  ss = []
  ss.append(stations[0] - w - 1)
  for i in range(1, len(stations)):
    s1, s2 = stations[i - 1:i + 1]
    ss.append(s2 - w - (s1 + w) - 1)
  ss.append(n - (stations[-1] + w))
  m = 0
  for s in ss:
    m += s // (w * 2 + 1)
    if s % (w * 2 + 1) > 0:
      m += 1
  return m
