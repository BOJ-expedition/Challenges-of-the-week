import datetime
a,b = map(int,input().split())
days = ['월요일','화요일','수요일','목요일','금요일','토요일','일요일']

s = days[datetime.date(2016,a,b).weekday()]
print(s)
