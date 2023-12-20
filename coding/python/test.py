from typing import Mapping, Dict
import sys

def add_to_map(m1: Mapping[int, str], m2: Dict[int, str]) -> None:
    for k,v in m1.items():
        m2[k] = v

if __name__ == '__main__':
    m1 = {0: "a", 1: "b"}
    m2 = {0: "0", 2: "2"}

    add_to_map(m1, m2)

    for k,v in m1.items():
        assert k in m2, "Key was not added correctly to m2"
        assert m2[k] == m1[k], "Values are not the same"
    print("all asserts passed successfully")
