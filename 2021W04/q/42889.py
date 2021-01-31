""" 실패율
  Link: https://programmers.co.kr/learn/courses/30/lessons/42889
"""
def solution(N, stages):
  failures = []
  for i in range(N):
    l = len(stages)
    stages = list(s for s in stages if s > i + 1)
    failures.append((i + 1, (l - len(stages)) / l if l > 0 else 0))
  return list(k for k, v in sorted(failures, key=lambda kv: kv[1], reverse=True))
