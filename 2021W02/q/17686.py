""" [3차] 파일명 정렬
  Link: https://programmers.co.kr/learn/courses/30/lessons/17686
"""
def solution(files):
  fs = []
  import re
  for f in files:
    m = re.match(r'^([^\d]+)(\d+)(.*)', f)
    if m is not None:
      head, number, tail = m.groups()
      fs.append(dict(head=head, h=head.lower(), number=number, n=int(number), tail=tail))
  fs.sort(key=lambda f: f["n"])
  fs.sort(key=lambda f: f["h"])
  return [ ''.join((f["head"], f["number"], f["tail"])) for f in fs ]
