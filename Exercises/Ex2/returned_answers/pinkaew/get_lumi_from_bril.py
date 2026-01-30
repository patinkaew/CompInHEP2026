#!/usr/bin/env python3

import re

if __name__ == "__main__":
    #filename = argv[1]
    filename = "/Users/pinkaew/courses/pap331_spring2026/CompInHEP2026/Exercises/brilcalc.log"
    found = False
    istart = -1
    iend = -1
    with open(filename) as f:
        for line in f:
            # skip line containing +
            if re.search("\\+", line):
                continue
            
            # found
            if found:
                lumi_pb = float(line[istart+1:iend-1].strip())
                break;

            # match header
            match = re.search("\\|\\s*totrecorded\\(/pb\\)\\s*\\|", line)
            if match:
                found = True
                istart, iend = match.span()

    lumi_fb = lumi_pb / 1000
    print(f"lumi = {lumi_fb:.1f} /fb")
