def lines(a, b):
    """Return lines in both a and b"""
    list =[]
    len=[]
    a_split = a.split("\n")
    b_split = b.split("\n")
    a_split_len=len(a_split)
    b_split_len=len(b_split)
    if (a_split_len>=b_split_len):
        len=a_split
    else:
        len=b_split

    for рядок in рядки_1:
        if рядок in рядки_2:
            print(f"Рядок '{рядок}' присутній у обох наборах")
        else:
            print(f"Рядок '{рядок}' відсутній у другому наборі рядків")
    return []


def sentences(a, b):
    """Return sentences in both a and b"""

    # TODO
    return []


def substrings(a, b, n):
    """Return substrings of length n in both a and b"""

    # TODO
    return []
