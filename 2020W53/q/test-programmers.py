import os
import sys
import importlib
import json

_, q, *_ = sys.argv
d, f = os.path.split(q)
n, e = os.path.splitext(f)
with open(os.path.join(f'{n}.samples'), "rb") as rbo:
  samples = json.loads(rbo.read())
  for sample in samples:
    *sample, result = sample
    module = importlib.import_module(n)
    assert module.solution(*sample) == result, f'solution({sample}) != {result}'
