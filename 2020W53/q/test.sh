#!/bin/bash
python3 $1 < $(basename $1 .py).sample
