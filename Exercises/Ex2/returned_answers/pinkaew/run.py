#!/usr/bin/env python3

import os
import sys
import multiprocessing as mp

def f(n):
    os.system(f"./hello {n} > out_python_{n}.txt")

if __name__ == "__main__":
    nworkers = max(mp.cpu_count()-1, int(sys.argv[1]))
    with mp.Pool(nworkers) as p:
        p.map(f, range(1, int(sys.argv[1])+1))
