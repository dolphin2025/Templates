import sys

name = ''
if name:
    sys.stdin = open(name+'.in', 'r')
    sys.stdout = open(name+'.out', 'w')
	
def inpl(): return [int(i) for i in input().split()]
