from collections import deque

def main() -> None:
    match_team(int(input))

def match_team(T: int) -> None:
    for i in range(T):
        people = int(input())
        