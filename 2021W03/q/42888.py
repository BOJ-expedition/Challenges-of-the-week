""" 오픈채팅방
  Link: https://programmers.co.kr/learn/courses/30/lessons/42888
"""
def solution(record):
  events = []
  nameMap = {}
  actionDictionary = {
    "Enter": "들어왔습니다.",
    "Leave": "나갔습니다.",
  }
  for r in record:
    action, uid, *name = r.split()
    if len(name) > 0:
      nameMap[uid] = name[0]
    if action != "Change":
      events.append((uid, actionDictionary[action]))
  answer = []
  for uid, action in events:
    answer.append(f'{nameMap[uid]}님이 {action}')
  return answer
