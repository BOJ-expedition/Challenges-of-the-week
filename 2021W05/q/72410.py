""" 신규 아이디 추천
  Link: https://programmers.co.kr/learn/courses/30/lessons/72410
"""
def solution(new_id):
  new_id = new_id.lower()
  import re
  new_id = re.sub(r'[^\w\-\.]*', '', new_id)
  while ".." in new_id:
    new_id = new_id.replace("..", '.')
  new_id = new_id.strip('.')
  new_id = new_id.strip()
  if len(new_id) == 0:
    new_id = 'a'
  if len(new_id) >= 16:
    new_id = new_id[:15]
    new_id = new_id.rstrip('.')
  if len(new_id) <= 2:
    new_id += new_id[-1] * (3 - len(new_id))
  return new_id
