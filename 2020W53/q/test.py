import os
import sys
import subprocess

_, q, *_ = sys.argv
d, f = os.path.split(q)
n, e = os.path.splitext(f)
with open(os.path.join(f'{n}.sample'), "rb") as rbo:
  p = subprocess.Popen([ "python3", q ], stdin=subprocess.PIPE, stdout=subprocess.PIPE)
  stdout, stderr = p.communicate(input=rbo.read())
  print(stdout.decode())
